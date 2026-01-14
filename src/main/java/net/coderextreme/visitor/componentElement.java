package net.coderextreme.visitor;
public class componentElement extends org.web3d.x3d.jsail.Core.component implements VisitableElement
{
	private org.web3d.x3d.jsail.Core.component delegate = null;
	public componentElement(org.web3d.x3d.jsail.Core.component delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getCssClassElement().accept(v);
		getLevelElement().accept(v);
		getNameElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public SFInt32Element getLevelElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getLevel()));
}
	public SFStringElement getNameElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getName()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
}
