package net.coderextreme.visitor;
public class DoubleAxisHingeJointElement extends org.web3d.x3d.jsail.RigidBodyPhysics.DoubleAxisHingeJoint implements VisitableElement
{
	private org.web3d.x3d.jsail.RigidBodyPhysics.DoubleAxisHingeJoint delegate = null;
	public DoubleAxisHingeJointElement(org.web3d.x3d.jsail.RigidBodyPhysics.DoubleAxisHingeJoint delegate) {
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
		getDesiredAngularVelocity1Element().accept(v);
		getDesiredAngularVelocity2Element().accept(v);
		getForceOutputElement().accept(v);
		getHinge1AngleElement().accept(v);
		getHinge1AngleRateElement().accept(v);
		getHinge2AngleElement().accept(v);
		getHinge2AngleRateElement().accept(v);
		getISElement().accept(v);
		getMaxAngle1Element().accept(v);
		getMaxTorque1Element().accept(v);
		getMaxTorque2Element().accept(v);
		getMetadataElement().accept(v);
		getMinAngle1Element().accept(v);
		getStop1BounceElement().accept(v);
		getStop1ConstantForceMixElement().accept(v);
		getStop1ErrorCorrectionElement().accept(v);
		getSuspensionErrorCorrectionElement().accept(v);
		getSuspensionForceElement().accept(v);
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
	public SFFloatElement getDesiredAngularVelocity1Element() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getDesiredAngularVelocity1()));
}
	public SFFloatElement getDesiredAngularVelocity2Element() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getDesiredAngularVelocity2()));
}
	public MFStringElement getForceOutputElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getForceOutput()));
}
	public SFFloatElement getHinge1AngleElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getHinge1Angle()));
}
	public SFFloatElement getHinge1AngleRateElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getHinge1AngleRate()));
}
	public SFFloatElement getHinge2AngleElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getHinge2Angle()));
}
	public SFFloatElement getHinge2AngleRateElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getHinge2AngleRate()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFFloatElement getMaxAngle1Element() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMaxAngle1()));
}
	public SFFloatElement getMaxTorque1Element() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMaxTorque1()));
}
	public SFFloatElement getMaxTorque2Element() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMaxTorque2()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFFloatElement getMinAngle1Element() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMinAngle1()));
}
	public SFFloatElement getStop1BounceElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getStop1Bounce()));
}
	public SFFloatElement getStop1ConstantForceMixElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getStop1ConstantForceMix()));
}
	public SFFloatElement getStop1ErrorCorrectionElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getStop1ErrorCorrection()));
}
	public SFFloatElement getSuspensionErrorCorrectionElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getSuspensionErrorCorrection()));
}
	public SFFloatElement getSuspensionForceElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getSuspensionForce()));
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
