package net.coderextreme.visitor;
public class EXPORTElement extends org.web3d.x3d.jsail.Networking.EXPORT implements VisitableElement
{
	private org.web3d.x3d.jsail.Networking.EXPORT delegate = null;
	public EXPORTElement(org.web3d.x3d.jsail.Networking.EXPORT delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getASElement().accept(v);
		getCssClassElement().accept(v);
		getLocalDEFElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFStringElement getASElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getAS()));
}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public SFStringElement getLocalDEFElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getLocalDEF()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
}
