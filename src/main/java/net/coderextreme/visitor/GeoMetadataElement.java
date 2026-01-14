package net.coderextreme.visitor;
public class GeoMetadataElement extends org.web3d.x3d.jsail.Geospatial.GeoMetadata implements VisitableElement
{
	private org.web3d.x3d.jsail.Geospatial.GeoMetadata delegate = null;
	public GeoMetadataElement(org.web3d.x3d.jsail.Geospatial.GeoMetadata delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAutoRefreshElement().accept(v);
		getAutoRefreshTimeLimitElement().accept(v);
		getDataElement().accept(v);
		getDescriptionElement().accept(v);
		getISElement().accept(v);
		getLoadElement().accept(v);
		getMetadataElement().accept(v);
		getSummaryElement().accept(v);
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
	public MFNodeElement getDataElement() { 		 return new MFNodeElement<data>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getData()));
}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getLoadElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getLoad()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public MFStringElement getSummaryElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getSummary()));
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
