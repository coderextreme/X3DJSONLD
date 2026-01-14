package net.coderextreme.visitor;
public class ProximitySensorElement extends org.web3d.x3d.jsail.EnvironmentalSensor.ProximitySensor implements VisitableElement
{
	private org.web3d.x3d.jsail.EnvironmentalSensor.ProximitySensor delegate = null;
	public ProximitySensorElement(org.web3d.x3d.jsail.EnvironmentalSensor.ProximitySensor delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getCenterElement().accept(v);
		getCenterOfRotationElement().accept(v);
		getDescriptionElement().accept(v);
		getEnabledElement().accept(v);
		getEnterTimeElement().accept(v);
		getExitTimeElement().accept(v);
		getISElement().accept(v);
		getIsActiveElement().accept(v);
		getMetadataElement().accept(v);
		getOrientationElement().accept(v);
		getPositionElement().accept(v);
		getSizeElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFVec3fElement getCenterElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getCenter()));
}
	public SFVec3fElement getCenterOfRotationElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getCenterOfRotation()));
}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFTimeElement getEnterTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getEnterTime()));
}
	public SFTimeElement getExitTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getExitTime()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsActiveElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsActive()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFRotationElement getOrientationElement() { 		 return new SFRotationElement(new org.web3d.x3d.jsail.fields.SFRotation(delegate.getOrientation()));
}
	public SFVec3fElement getPositionElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getPosition()));
}
	public SFVec3fElement getSizeElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getSize()));
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
