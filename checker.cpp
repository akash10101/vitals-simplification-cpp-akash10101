#include <assert.h>

const int bpm_limit[] = { 70,150 };
const int spo2_limit = 90;
const int respRate_limit[] = { 30,95 };

bool IsBpmOK(float bpm)
{
	return (bpm<bpm_limit[0] || bpm>bpm_limit[1]);
}

bool IsSpo2OK(float spo2)
{
	return (spo2 < spo2_limit);
}

bool IsRespRateOK(float respRate)
{
	return (respRate<respRate_limit[0] || respRate>respRate_limit[1]);
}
bool vitalsAreOk(float bpm, float spo2, float respRate) {
  if(IsBpmOK) {
    return false;
  } else if(IsSpo2OK) {
    return false;
  } else if(IsRespRateOK) {
    return false;
  }
  return true;
}

int main() {
  assert(vitalsAreOk(80, 95, 60) == true);
  assert(vitalsAreOk(60, 90, 40) == false);
}
