package net.coderextreme.visitor;
public class StringSensorElement extends org.web3d.x3d.jsail.KeyDeviceSensor.StringSensor implements VisitableElement
{
	private org.web3d.x3d.jsail.KeyDeviceSensor.StringSensor delegate = null;
	public StringSensorElement(org.web3d.x3d.jsail.KeyDeviceSensor.StringSensor delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getDeletionAllowedElement().accept(v);
		getDescriptionElement().accept(v);
		getEnabledElement().accept(v);
		getEnteredTextElement().accept(v);
		getFinalTextElement().accept(v);
		getISElement().accept(v);
		getIsActiveElement().accept(v);
		getMetadataElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFBoolElement getDeletionAllowedElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getDeletionAllowed()));
}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFStringElement getEnteredTextElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getEnteredText()));
}
	public SFStringElement getFinalTextElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getFinalText()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsActiveElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsActive()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
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
