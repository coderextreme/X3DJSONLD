package net.coderextreme.visitor;
public class DISEntityManagerElement extends org.web3d.x3d.jsail.DIS.DISEntityManager implements VisitableElement
{
	private org.web3d.x3d.jsail.DIS.DISEntityManager delegate = null;
	public DISEntityManagerElement(org.web3d.x3d.jsail.DIS.DISEntityManager delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAddressElement().accept(v);
		getApplicationIDElement().accept(v);
		getChildrenElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getPortElement().accept(v);
		getSiteIDElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFStringElement getAddressElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getAddress()));
}
	public SFInt32Element getApplicationIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getApplicationID()));
}
	public MFNodeElement getChildrenElement() { 		 return new MFNodeElement(delegate.getChildren());
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFInt32Element getPortElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getPort()));
}
	public SFInt32Element getSiteIDElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getSiteID()));
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
