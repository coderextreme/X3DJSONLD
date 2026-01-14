package net.coderextreme.visitor;
public class DISEntityTypeMappingElement extends org.web3d.x3d.jsail.DIS.DISEntityTypeMapping implements VisitableElement
{
	private org.web3d.x3d.jsail.DIS.DISEntityTypeMapping delegate = null;
	public DISEntityTypeMappingElement(org.web3d.x3d.jsail.DIS.DISEntityTypeMapping delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAutoRefreshElement().accept(v);
		getAutoRefreshTimeLimitElement().accept(v);
		getCategoryElement().accept(v);
		getCountryElement().accept(v);
		getDescriptionElement().accept(v);
		getDomainElement().accept(v);
		getExtraElement().accept(v);
		getISElement().accept(v);
		getKindElement().accept(v);
		getLoadElement().accept(v);
		getMetadataElement().accept(v);
		getSpecificElement().accept(v);
		getSubcategoryElement().accept(v);
		getUrlElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFTimeElement getAutoRefreshElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getAutoRefresh()));
}
	public SFTimeElement getAutoRefreshTimeLimitElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getAutoRefreshTimeLimit()));
}
	public SFInt32Element getCategoryElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getCategory()));
}
	public SFInt32Element getCountryElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getCountry()));
}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFInt32Element getDomainElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getDomain()));
}
	public SFInt32Element getExtraElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getExtra()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFInt32Element getKindElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getKind()));
}
	public SFBoolElement getLoadElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getLoad()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFInt32Element getSpecificElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getSpecific()));
}
	public SFInt32Element getSubcategoryElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getSubcategory()));
}
	public MFStringElement getUrlElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getUrl()));
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
