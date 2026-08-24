#ifndef RENDER_EFFECT_H
#define RENDER_EFFECT_H

#include <string>

struct viewEffect_s {
    std::string name;
    int flags;
    viewEffect_s() : name(), flags(0) {}
};

class rvRenderEffectLocal {
public:
    rvRenderEffectLocal() = default;
    virtual ~rvRenderEffectLocal() = default;
    virtual void Init() {}
    virtual void Shutdown() {}
    virtual const char* GetName() const { return name_.c_str(); }
    virtual void Apply() {}
    virtual void Unapply() {}
protected:
    std::string name_;
};

extern rvRenderEffectLocal* def;

#endif // RENDER_EFFECT_H