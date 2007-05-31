/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.31
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_opensimModel_WRAP_H_
#define SWIG_opensimModel_WRAP_H_

class SwigDirector_SimtkAnimationCallback : public OpenSim::SimtkAnimationCallback, public Swig::Director {

public:
    void swig_connect_director(JNIEnv *jenv, jobject jself, jclass jcls, bool swig_mem_own, bool weak_global);
    SwigDirector_SimtkAnimationCallback(JNIEnv *jenv, OpenSim::Model *aModel);
    virtual ~SwigDirector_SimtkAnimationCallback();
    virtual OpenSim::Object *copy() const;
    virtual OpenSim::Object *copy(DOMElement *aNode) const;
    virtual void copy(OpenSim::Object const &aObject);
    virtual OpenSim::VisibleObject *getDisplayer() const;
    virtual bool isValidDefaultType(OpenSim::Object const *aObject) const;
    virtual void updateFromXMLNode();
    virtual void updateDefaultObjectsFromXMLNode();
    virtual void updateXMLNode(DOMElement *aParent);
    virtual void updateDefaultObjectsXMLNode(DOMElement *aParent);
    virtual void generateXMLNode(DOMElement *aParent);
    virtual void update(OpenSim::Object const &aObject, Event &aEvent);
    virtual bool isA(char const *type) const;
    virtual void setModel(OpenSim::Model *arg0);
    virtual int begin(int aStep, double aDT, double aT, double *aX, double *aY, void *aClientData = NULL);
    virtual int step(double *aXPrev, double *aYPrev, int aStep, double aDT, double aT, double *aX, double *aY, void *aClientData = NULL);
    virtual int end(int aStep, double aDT, double aT, double *aX, double *aY, void *aClientData = NULL);
public:
    bool swig_overrides(int n) {
      return (n < 19 ? swig_override[n] : false);
    }
protected:
    bool swig_override[19];
};


#endif
