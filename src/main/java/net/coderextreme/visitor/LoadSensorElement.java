package net.coderextreme.visitor;
public class LoadSensorElement extends org.web3d.x3d.jsail.Networking.LoadSensor implements VisitableElement
{
	private org.web3d.x3d.jsail.Networking.LoadSensor delegate = null;
	public LoadSensorElement(org.web3d.x3d.jsail.Networking.LoadSensor delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getChildrenElement().accept(v);
		getDescriptionElement().accept(v);
		getEnabledElement().accept(v);
		getISElement().accept(v);
		getIsActiveElement().accept(v);
		getIsLoadedElement().accept(v);
		getLoadTimeElement().accept(v);
		getMetadataElement().accept(v);
		getProgressElement().accept(v);
		getTimeOutElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public MFNodeElement getChildrenElement() { 		 return new MFNodeElement(delegate.getChildren());
}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsActiveElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsActive()));
}
	public SFBoolElement getIsLoadedElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsLoaded()));
}
	public SFTimeElement getLoadTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getLoadTime()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFFloatElement getProgressElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getProgress()));
}
	public SFTimeElement getTimeOutElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getTimeOut()));
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
