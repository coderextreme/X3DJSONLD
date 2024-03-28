package net.coderextreme.visitor;
public class MotorJointElement extends org.web3d.x3d.jsail.RigidBodyPhysics.MotorJoint implements VisitableElement
{
	private org.web3d.x3d.jsail.RigidBodyPhysics.MotorJoint delegate = null;
	public MotorJointElement(org.web3d.x3d.jsail.RigidBodyPhysics.MotorJoint delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAutoCalcElement().accept(v);
		getAxis1AngleElement().accept(v);
		getAxis1TorqueElement().accept(v);
		getAxis2AngleElement().accept(v);
		getAxis2TorqueElement().accept(v);
		getAxis3AngleElement().accept(v);
		getAxis3TorqueElement().accept(v);
		getBody1Element().accept(v);
		getBody2Element().accept(v);
		getEnabledAxesElement().accept(v);
		getForceOutputElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getMotor1AngleElement().accept(v);
		getMotor1AngleRateElement().accept(v);
		getMotor1AxisElement().accept(v);
		getMotor2AngleElement().accept(v);
		getMotor2AngleRateElement().accept(v);
		getMotor2AxisElement().accept(v);
		getMotor3AngleElement().accept(v);
		getMotor3AngleRateElement().accept(v);
		getMotor3AxisElement().accept(v);
		getStop1BounceElement().accept(v);
		getStop1ErrorCorrectionElement().accept(v);
		getStop2BounceElement().accept(v);
		getStop2ErrorCorrectionElement().accept(v);
		getStop3BounceElement().accept(v);
		getStop3ErrorCorrectionElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFBoolElement getAutoCalcElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getAutoCalc()));
}
	public SFFloatElement getAxis1AngleElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getAxis1Angle()));
}
	public SFFloatElement getAxis1TorqueElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getAxis1Torque()));
}
	public SFFloatElement getAxis2AngleElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getAxis2Angle()));
}
	public SFFloatElement getAxis2TorqueElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getAxis2Torque()));
}
	public SFFloatElement getAxis3AngleElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getAxis3Angle()));
}
	public SFFloatElement getAxis3TorqueElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getAxis3Torque()));
}
	public SFNodeElement getBody1Element() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getBody1()));
}
	public SFNodeElement getBody2Element() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getBody2()));
}
	public SFInt32Element getEnabledAxesElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getEnabledAxes()));
}
	public MFStringElement getForceOutputElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getForceOutput()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFFloatElement getMotor1AngleElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMotor1Angle()));
}
	public SFFloatElement getMotor1AngleRateElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMotor1AngleRate()));
}
	public SFVec3fElement getMotor1AxisElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getMotor1Axis()));
}
	public SFFloatElement getMotor2AngleElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMotor2Angle()));
}
	public SFFloatElement getMotor2AngleRateElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMotor2AngleRate()));
}
	public SFVec3fElement getMotor2AxisElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getMotor2Axis()));
}
	public SFFloatElement getMotor3AngleElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMotor3Angle()));
}
	public SFFloatElement getMotor3AngleRateElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMotor3AngleRate()));
}
	public SFVec3fElement getMotor3AxisElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getMotor3Axis()));
}
	public SFFloatElement getStop1BounceElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getStop1Bounce()));
}
	public SFFloatElement getStop1ErrorCorrectionElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getStop1ErrorCorrection()));
}
	public SFFloatElement getStop2BounceElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getStop2Bounce()));
}
	public SFFloatElement getStop2ErrorCorrectionElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getStop2ErrorCorrection()));
}
	public SFFloatElement getStop3BounceElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getStop3Bounce()));
}
	public SFFloatElement getStop3ErrorCorrectionElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getStop3ErrorCorrection()));
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
