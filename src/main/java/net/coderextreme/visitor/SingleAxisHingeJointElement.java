package net.coderextreme.visitor;
public class SingleAxisHingeJointElement extends org.web3d.x3d.jsail.RigidBodyPhysics.SingleAxisHingeJoint implements VisitableElement
{
	private org.web3d.x3d.jsail.RigidBodyPhysics.SingleAxisHingeJoint delegate = null;
	public SingleAxisHingeJointElement(org.web3d.x3d.jsail.RigidBodyPhysics.SingleAxisHingeJoint delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAnchorPointElement().accept(v);
		getAngleElement().accept(v);
		getAngleRateElement().accept(v);
		getAxisElement().accept(v);
		getBody1Element().accept(v);
		getBody1AnchorPointElement().accept(v);
		getBody2Element().accept(v);
		getBody2AnchorPointElement().accept(v);
		getForceOutputElement().accept(v);
		getISElement().accept(v);
		getMaxAngleElement().accept(v);
		getMetadataElement().accept(v);
		getMinAngleElement().accept(v);
		getStopBounceElement().accept(v);
		getStopErrorCorrectionElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFVec3fElement getAnchorPointElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getAnchorPoint()));
}
	public SFFloatElement getAngleElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getAngle()));
}
	public SFFloatElement getAngleRateElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getAngleRate()));
}
	public SFVec3fElement getAxisElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getAxis()));
}
	public SFNodeElement getBody1Element() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getBody1()));
}
	public SFVec3fElement getBody1AnchorPointElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBody1AnchorPoint()));
}
	public SFNodeElement getBody2Element() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getBody2()));
}
	public SFVec3fElement getBody2AnchorPointElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBody2AnchorPoint()));
}
	public MFStringElement getForceOutputElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getForceOutput()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFFloatElement getMaxAngleElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMaxAngle()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFFloatElement getMinAngleElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMinAngle()));
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
