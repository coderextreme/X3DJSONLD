package net.coderextreme.visitor;
public class X3DElement extends org.web3d.x3d.jsail.Core.X3D implements VisitableElement
{
	private org.web3d.x3d.jsail.Core.X3D delegate = null;
	public X3DElement(org.web3d.x3d.jsail.Core.X3D delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getCssClassElement().accept(v);
		getHeadElement().accept(v);
		getProfileElement().accept(v);
		getSceneElement().accept(v);
		getCssStyleElement().accept(v);
		getVersionElement().accept(v);
	}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public SFNodeElement getHeadElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getHead()));
}
	public SFStringElement getProfileElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getProfile()));
}
	public SFNodeElement getSceneElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getScene()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
	public SFStringElement getVersionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getVersion()));
}
}
