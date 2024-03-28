package net.coderextreme.visitor;
public class ContactElement extends org.web3d.x3d.jsail.RigidBodyPhysics.Contact implements VisitableElement
{
	private org.web3d.x3d.jsail.RigidBodyPhysics.Contact delegate = null;
	public ContactElement(org.web3d.x3d.jsail.RigidBodyPhysics.Contact delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAppliedParametersElement().accept(v);
		getBody1Element().accept(v);
		getBody2Element().accept(v);
		getBounceElement().accept(v);
		getContactNormalElement().accept(v);
		getDepthElement().accept(v);
		getFrictionCoefficientsElement().accept(v);
		getFrictionDirectionElement().accept(v);
		getGeometry1Element().accept(v);
		getGeometry2Element().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getMinBounceSpeedElement().accept(v);
		getPositionElement().accept(v);
		getSlipCoefficientsElement().accept(v);
		getSoftnessConstantForceMixElement().accept(v);
		getSoftnessErrorCorrectionElement().accept(v);
		getSurfaceSpeedElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public MFStringElement getAppliedParametersElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getAppliedParameters()));
}
	public SFNodeElement getBody1Element() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getBody1()));
}
	public SFNodeElement getBody2Element() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getBody2()));
}
	public SFFloatElement getBounceElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getBounce()));
}
	public SFVec3fElement getContactNormalElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getContactNormal()));
}
	public SFFloatElement getDepthElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getDepth()));
}
	public SFVec2fElement getFrictionCoefficientsElement() { 		 return new SFVec2fElement(new org.web3d.x3d.jsail.fields.SFVec2f(delegate.getFrictionCoefficients()));
}
	public SFVec3fElement getFrictionDirectionElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getFrictionDirection()));
}
	public SFNodeElement getGeometry1Element() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getGeometry1()));
}
	public SFNodeElement getGeometry2Element() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getGeometry2()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFFloatElement getMinBounceSpeedElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getMinBounceSpeed()));
}
	public SFVec3fElement getPositionElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getPosition()));
}
	public SFVec2fElement getSlipCoefficientsElement() { 		 return new SFVec2fElement(new org.web3d.x3d.jsail.fields.SFVec2f(delegate.getSlipCoefficients()));
}
	public SFFloatElement getSoftnessConstantForceMixElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getSoftnessConstantForceMix()));
}
	public SFFloatElement getSoftnessErrorCorrectionElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getSoftnessErrorCorrection()));
}
	public SFVec2fElement getSurfaceSpeedElement() { 		 return new SFVec2fElement(new org.web3d.x3d.jsail.fields.SFVec2f(delegate.getSurfaceSpeed()));
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
