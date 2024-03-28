package net.coderextreme.visitor;
public class RigidBodyElement extends org.web3d.x3d.jsail.RigidBodyPhysics.RigidBody implements VisitableElement
{
	private org.web3d.x3d.jsail.RigidBodyPhysics.RigidBody delegate = null;
	public RigidBodyElement(org.web3d.x3d.jsail.RigidBodyPhysics.RigidBody delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAngularDampingFactorElement().accept(v);
		getAngularVelocityElement().accept(v);
		getAutoDampElement().accept(v);
		getAutoDisableElement().accept(v);
		getBboxCenterElement().accept(v);
		getBboxDisplayElement().accept(v);
		getBboxSizeElement().accept(v);
		getCenterOfMassElement().accept(v);
		getDisableAngularSpeedElement().accept(v);
		getDisableLinearSpeedElement().accept(v);
		getDisableTimeElement().accept(v);
		getEnabledElement().accept(v);
		getFiniteRotationAxisElement().accept(v);
		getFixedElement().accept(v);
		getForcesElement().accept(v);
		getGeometryElement().accept(v);
		getInertiaElement().accept(v);
		getISElement().accept(v);
		getLinearDampingFactorElement().accept(v);
		getLinearVelocityElement().accept(v);
		getMassElement().accept(v);
		getMassDensityModelElement().accept(v);
		getMetadataElement().accept(v);
		getOrientationElement().accept(v);
		getPositionElement().accept(v);
		getTorquesElement().accept(v);
		getUseFiniteRotationElement().accept(v);
		getUseGlobalGravityElement().accept(v);
		getVisibleElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFFloatElement getAngularDampingFactorElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getAngularDampingFactor()));
}
	public SFVec3fElement getAngularVelocityElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getAngularVelocity()));
}
	public SFBoolElement getAutoDampElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getAutoDamp()));
}
	public SFBoolElement getAutoDisableElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getAutoDisable()));
}
	public SFVec3fElement getBboxCenterElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBboxCenter()));
}
	public SFBoolElement getBboxDisplayElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getBboxDisplay()));
}
	public SFVec3fElement getBboxSizeElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBboxSize()));
}
	public SFVec3fElement getCenterOfMassElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getCenterOfMass()));
}
	public SFFloatElement getDisableAngularSpeedElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getDisableAngularSpeed()));
}
	public SFFloatElement getDisableLinearSpeedElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getDisableLinearSpeed()));
}
	public SFTimeElement getDisableTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getDisableTime()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFVec3fElement getFiniteRotationAxisElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getFiniteRotationAxis()));
}
	public SFBoolElement getFixedElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getFixed()));
}
	public MFVec3fElement getForcesElement() { 		 return new MFVec3fElement(new org.web3d.x3d.jsail.fields.MFVec3f(delegate.getForces()));
}
	public MFNodeElement getGeometryElement() { 		 return new MFNodeElement<geometry>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getGeometry()));
}
	public SFMatrix3fElement getInertiaElement() { 		 return new SFMatrix3fElement(new org.web3d.x3d.jsail.fields.SFMatrix3f(delegate.getInertia()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFFloatElement getLinearDampingFactorElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getLinearDampingFactor()));
}
	public SFVec3fElement getLinearVelocityElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getLinearVelocity()));
}
	public SFFloatElement getMassElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMass()));
}
	public SFNodeElement getMassDensityModelElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getMassDensityModel()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFRotationElement getOrientationElement() { 		 return new SFRotationElement(new org.web3d.x3d.jsail.fields.SFRotation(delegate.getOrientation()));
}
	public SFVec3fElement getPositionElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getPosition()));
}
	public MFVec3fElement getTorquesElement() { 		 return new MFVec3fElement(new org.web3d.x3d.jsail.fields.MFVec3f(delegate.getTorques()));
}
	public SFBoolElement getUseFiniteRotationElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getUseFiniteRotation()));
}
	public SFBoolElement getUseGlobalGravityElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getUseGlobalGravity()));
}
	public SFBoolElement getVisibleElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getVisible()));
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
