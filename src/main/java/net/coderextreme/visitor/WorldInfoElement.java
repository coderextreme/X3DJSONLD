package net.coderextreme.visitor;
public class WorldInfoElement extends org.web3d.x3d.jsail.Core.WorldInfo implements VisitableElement
{
	private org.web3d.x3d.jsail.Core.WorldInfo delegate = null;
	public WorldInfoElement(org.web3d.x3d.jsail.Core.WorldInfo delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getInfoElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getTitleElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public MFStringElement getInfoElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getInfo()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFStringElement getTitleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getTitle()));
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
