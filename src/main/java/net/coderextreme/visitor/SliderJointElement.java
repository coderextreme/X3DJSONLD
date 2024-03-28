package net.coderextreme.visitor;
public class SliderJointElement extends org.web3d.x3d.jsail.RigidBodyPhysics.SliderJoint implements VisitableElement
{
	private org.web3d.x3d.jsail.RigidBodyPhysics.SliderJoint delegate = null;
	public SliderJointElement(org.web3d.x3d.jsail.RigidBodyPhysics.SliderJoint delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAxisElement().accept(v);
		getBody1Element().accept(v);
		getBody2Element().accept(v);
		getForceOutputElement().accept(v);
		getISElement().accept(v);
		getMaxSeparationElement().accept(v);
		getMetadataElement().accept(v);
		getMinSeparationElement().accept(v);
		getSeparationElement().accept(v);
		getSeparationRateElement().accept(v);
		getSliderForceElement().accept(v);
		getStopBounceElement().accept(v);
		getStopErrorCorrectionElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFVec3fElement getAxisElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getAxis()));
}
	public SFNodeElement getBody1Element() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getBody1()));
}
	public SFNodeElement getBody2Element() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getBody2()));
}
	public MFStringElement getForceOutputElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getForceOutput()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFFloatElement getMaxSeparationElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMaxSeparation()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFFloatElement getMinSeparationElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMinSeparation()));
}
	public SFFloatElement getSeparationElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getSeparation()));
}
	public SFFloatElement getSeparationRateElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getSeparationRate()));
}
	public SFFloatElement getSliderForceElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getSliderForce()));
}
	public SFFloatElement getStopBounceElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getStopBounce()));
}
	public SFFloatElement getStopErrorCorrectionElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getStopErrorCorrection()));
}
	public SFStringElement getDEFElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDEF()));
}
	public SFStringElement getUSEElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getUSE()));
}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
}
