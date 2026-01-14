package net.coderextreme.visitor;
public class headElement extends org.web3d.x3d.jsail.Core.head implements VisitableElement
{
	private org.web3d.x3d.jsail.Core.head delegate = null;
	public headElement(org.web3d.x3d.jsail.Core.head delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getCssClassElement().accept(v);
		getComponentElement().accept(v);
		getMetaElement().accept(v);
		getCssStyleElement().accept(v);
		getUnitElement().accept(v);
	}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public MFNodeElement getComponentElement() { 		 return new MFNodeElement<component>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getComponent()));
}
	public MFNodeElement getMetaElement() { 		 return new MFNodeElement<meta>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getMeta()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
	public MFNodeElement getUnitElement() { 		 return new MFNodeElement<unit>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getUnit()));
}
}
