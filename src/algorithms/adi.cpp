// class Solution {
// public:
//  int minimumCost(int m, int n, vector<int>& horizontalCut, vector<int>& verticalCut) {
//  // Sort the cuts in descending order
//  sort(horizontalCut.rbegin(), horizontalCut.rend());
//  sort(verticalCut.rbegin(), verticalCut.rend());
 
//  int h = 0, v = 0;
//  int horizontalPieces = 1, verticalPieces = 1;
//  int totalCost = 0;
 
//  while (h < horizontalCut.size() && v < verticalCut.size()) {
//  if (horizontalCut[h] > verticalCut[v]) {
//  totalCost += horizontalCut[h] * verticalPieces;
//  horizontalPieces++;
//  h++;
//  } else {
//  totalCost += verticalCut[v] * horizontalPieces;
//  verticalPieces++;
//  v++;
//  }
//  }
 
//  // Add remaining horizontal cuts
//  while (h < horizontalCut.size()) {
//  totalCost += horizontalCut[h] * verticalPieces;
//  h++;
//  }
 
//  // Add remaining vertical cuts
//  while (v < verticalCut.size()) {
//  totalCost += verticalCut[v] * horizontalPieces;
//  v++;
//  }
 
//  return totalCost;
//  }
// };