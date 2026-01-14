package net.coderextreme.visitor;
public class UniversalJointElement extends org.web3d.x3d.jsail.RigidBodyPhysics.UniversalJoint implements VisitableElement
{
	private org.web3d.x3d.jsail.RigidBodyPhysics.UniversalJoint delegate = null;
	public UniversalJointElement(org.web3d.x3d.jsail.RigidBodyPhysics.UniversalJoint delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAnchorPointElement().accept(v);
		getAxis1Element().accept(v);
		getAxis2Element().accept(v);
		getBody1Element().accept(v);
		getBody1AnchorPointElement().accept(v);
		getBody1AxisElement().accept(v);
		getBody2Element().accept(v);
		getBody2AnchorPointElement().accept(v);
		getBody2AxisElement().accept(v);
		getForceOutputElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getStop1BounceElement().accept(v);
		getStop1ErrorCorrectionElement().accept(v);
		getStop2BounceElement().accept(v);
		getStop2ErrorCorrectionElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFVec3fElement getAnchorPointElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getAnchorPoint()));
}
	public SFVec3fElement getAxis1Element() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getAxis1()));
}
	public SFVec3fElement getAxis2Element() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getAxis2()));
}
	public SFNodeElement getBody1Element() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getBody1()));
}
	public SFVec3fElement getBody1AnchorPointElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBody1AnchorPoint()));
}
	public SFVec3fElement getBody1AxisElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBody1Axis()));
}
	public SFNodeElement getBody2Element() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getBody2()));
}
	public SFVec3fElement getBody2AnchorPointElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBody2AnchorPoint()));
}
	public SFVec3fElement getBody2AxisElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBody2Axis()));
}
	public MFStringElement getForceOutputElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getForceOutput()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFFloatElement getStop1BounceElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getStop1Bounce()));
}
	public SFFloatElement getStop1ErrorCorrectionElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getStop1ErrorCorrection()));
}
	public SFFloatElement getStop2BounceElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getStop2Bounce()));
}
	public SFFloatElement getStop2ErrorCorrectionElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getStop2ErrorCorrection()));
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
