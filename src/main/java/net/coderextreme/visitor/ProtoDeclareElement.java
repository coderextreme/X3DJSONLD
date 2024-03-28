package net.coderextreme.visitor;
public class ProtoDeclareElement extends org.web3d.x3d.jsail.Core.ProtoDeclare implements VisitableElement
{
	private org.web3d.x3d.jsail.Core.ProtoDeclare delegate = null;
	public ProtoDeclareElement(org.web3d.x3d.jsail.Core.ProtoDeclare delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAppinfoElement().accept(v);
		getCssClassElement().accept(v);
		getDocumentationElement().accept(v);
		getNameElement().accept(v);
		getProtoBodyElement().accept(v);
		getProtoInterfaceElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFStringElement getAppinfoElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getAppinfo()));
}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public SFStringElement getDocumentationElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDocumentation()));
}
	public SFStringElement getNameElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getName()));
}
	public SFNodeElement getProtoBodyElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getProtoBody()));
}
	public SFNodeElement getProtoInterfaceElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getProtoInterface()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
}
