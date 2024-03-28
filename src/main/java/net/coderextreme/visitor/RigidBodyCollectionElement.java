package net.coderextreme.visitor;
public class RigidBodyCollectionElement extends org.web3d.x3d.jsail.RigidBodyPhysics.RigidBodyCollection implements VisitableElement
{
	private org.web3d.x3d.jsail.RigidBodyPhysics.RigidBodyCollection delegate = null;
	public RigidBodyCollectionElement(org.web3d.x3d.jsail.RigidBodyPhysics.RigidBodyCollection delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAutoDisableElement().accept(v);
		getBboxCenterElement().accept(v);
		getBboxDisplayElement().accept(v);
		getBboxSizeElement().accept(v);
		getBodiesElement().accept(v);
		getColliderElement().accept(v);
		getConstantForceMixElement().accept(v);
		getContactSurfaceThicknessElement().accept(v);
		getDisableAngularSpeedElement().accept(v);
		getDisableLinearSpeedElement().accept(v);
		getDisableTimeElement().accept(v);
		getEnabledElement().accept(v);
		getErrorCorrectionElement().accept(v);
		getGravityElement().accept(v);
		getISElement().accept(v);
		getIterationsElement().accept(v);
		getJointsElement().accept(v);
		getMaxCorrectionSpeedElement().accept(v);
		getMetadataElement().accept(v);
		getPreferAccuracyElement().accept(v);
		getVisibleElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFBoolElement getAutoDisableElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getAutoDisable()));
}
	public SFVec3fElement getBboxCenterElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBboxCenter()));
}
	public SFBoolElement getBboxDisplayElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getBboxDisplay()));
}
	public SFVec3fElement getBboxSizeElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBboxSize()));
}
	public MFNodeElement getBodiesElement() { 		 return new MFNodeElement<bodies>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getBodies()));
}
	public SFNodeElement getColliderElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getCollider()));
}
	public SFFloatElement getConstantForceMixElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getConstantForceMix()));
}
	public SFFloatElement getContactSurfaceThicknessElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getContactSurfaceThickness()));
}
	public SFFloatElement getDisableAngularSpeedElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getDisableAngularSpeed()));
}
	public SFFloatElement getDisableLinearSpeedElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getDisableLinearSpeed()));
}
	public SFTimeElement getDisableTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getDisableTime()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFFloatElement getErrorCorrectionElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getErrorCorrection()));
}
	public SFVec3fElement getGravityElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getGravity()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFInt32Element getIterationsElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getIterations()));
}
	public MFNodeElement getJointsElement() { 		 return new MFNodeElement<joints>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getJoints()));
}
	public SFFloatElement getMaxCorrectionSpeedElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMaxCorrectionSpeed()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFBoolElement getPreferAccuracyElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getPreferAccuracy()));
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
