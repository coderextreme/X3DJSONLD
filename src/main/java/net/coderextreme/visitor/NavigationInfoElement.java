package net.coderextreme.visitor;
public class NavigationInfoElement extends org.web3d.x3d.jsail.Navigation.NavigationInfo implements VisitableElement
{
	private org.web3d.x3d.jsail.Navigation.NavigationInfo delegate = null;
	public NavigationInfoElement(org.web3d.x3d.jsail.Navigation.NavigationInfo delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAvatarSizeElement().accept(v);
		getBindTimeElement().accept(v);
		getHeadlightElement().accept(v);
		getISElement().accept(v);
		getIsBoundElement().accept(v);
		getMetadataElement().accept(v);
		getSpeedElement().accept(v);
		getTransitionCompleteElement().accept(v);
		getTransitionTimeElement().accept(v);
		getTransitionTypeElement().accept(v);
		getTypeElement().accept(v);
		getVisibilityLimitElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public MFFloatElement getAvatarSizeElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getAvatarSize()));
}
	public SFTimeElement getBindTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getBindTime()));
}
	public SFBoolElement getHeadlightElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getHeadlight()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsBoundElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsBound()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFFloatElement getSpeedElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getSpeed()));
}
	public SFBoolElement getTransitionCompleteElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getTransitionComplete()));
}
	public SFTimeElement getTransitionTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getTransitionTime()));
}
	public MFStringElement getTransitionTypeElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getTransitionType()));
}
	public MFStringElement getTypeElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getType()));
}
	public SFFloatElement getVisibilityLimitElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getVisibilityLimit()));
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
