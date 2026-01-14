package net.coderextreme.visitor;
public class KeySensorElement extends org.web3d.x3d.jsail.KeyDeviceSensor.KeySensor implements VisitableElement
{
	private org.web3d.x3d.jsail.KeyDeviceSensor.KeySensor delegate = null;
	public KeySensorElement(org.web3d.x3d.jsail.KeyDeviceSensor.KeySensor delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getActionKeyPressElement().accept(v);
		getActionKeyReleaseElement().accept(v);
		getAltKeyElement().accept(v);
		getControlKeyElement().accept(v);
		getDescriptionElement().accept(v);
		getEnabledElement().accept(v);
		getISElement().accept(v);
		getIsActiveElement().accept(v);
		getKeyPressElement().accept(v);
		getKeyReleaseElement().accept(v);
		getMetadataElement().accept(v);
		getShiftKeyElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFInt32Element getActionKeyPressElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getActionKeyPress()));
}
	public SFInt32Element getActionKeyReleaseElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getActionKeyRelease()));
}
	public SFBoolElement getAltKeyElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getAltKey()));
}
	public SFBoolElement getControlKeyElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getControlKey()));
}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsActiveElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsActive()));
}
	public SFStringElement getKeyPressElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getKeyPress()));
}
	public SFStringElement getKeyReleaseElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getKeyRelease()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFBoolElement getShiftKeyElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getShiftKey()));
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
