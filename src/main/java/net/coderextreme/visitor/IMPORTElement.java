package net.coderextreme.visitor;
public class IMPORTElement extends org.web3d.x3d.jsail.Networking.IMPORT implements VisitableElement
{
	private org.web3d.x3d.jsail.Networking.IMPORT delegate = null;
	public IMPORTElement(org.web3d.x3d.jsail.Networking.IMPORT delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getASElement().accept(v);
		getCssClassElement().accept(v);
		getImportedDEFElement().accept(v);
		getInlineDEFElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFStringElement getASElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getAS()));
}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public SFStringElement getImportedDEFElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getImportedDEF()));
}
	public SFStringElement getInlineDEFElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getInlineDEF()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
}
