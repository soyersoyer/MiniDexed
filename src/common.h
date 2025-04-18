
#ifndef _common_h
#define _common_h

#define ARRAY_LENGTH(x) (sizeof(x) / sizeof((x)[0]))

inline long maplong(long x, long in_min, long in_max, long out_min, long out_max) {
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

inline float32_t mapfloat(float32_t val, float32_t in_min, float32_t in_max, float32_t out_min, float32_t out_max)
{
  return (val - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

inline float32_t mapfloat(int val, int in_min, int in_max, float32_t out_min, float32_t out_max)
{
  return (val - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

inline long mapfloatr(int val, int in_min, int in_max, float32_t out_min, float32_t out_max)
{
  return lround((val - in_min) * (out_max - out_min) / (in_max - in_min) + out_min);
}


#define constrain(amt, low, high) ({ \
  __typeof__(amt) _amt = (amt); \
  __typeof__(low) _low = (low); \
  __typeof__(high) _high = (high); \
  (_amt < _low) ? _low : ((_amt > _high) ? _high : _amt); \
})

#endif
