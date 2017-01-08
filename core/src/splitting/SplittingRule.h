#ifndef GRADIENTFOREST_SPLITTINGRULE_H
#define GRADIENTFOREST_SPLITTINGRULE_H

#include <unordered_map>
#include <vector>

class SplittingRule {
public:
  virtual ~SplittingRule() {}
  virtual bool findBestSplit(size_t nodeID,
                             const std::vector<size_t> &possible_split_varIDs,
                             const std::unordered_map<size_t, double> &responses_by_sampleID,
                             std::vector<std::vector<size_t>> &sampleIDs,
                             std::vector<size_t> &split_varIDs,
                             std::vector<double> &split_values) = 0;
};

#endif //GRADIENTFOREST_SPLITTINGRULE_H

