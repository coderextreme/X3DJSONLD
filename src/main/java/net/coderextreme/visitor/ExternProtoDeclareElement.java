package net.coderextreme.visitor;
public class ExternProtoDeclareElement extends org.web3d.x3d.jsail.Core.ExternProtoDeclare implements VisitableElement
{
	private org.web3d.x3d.jsail.Core.ExternProtoDeclare delegate = null;
	public ExternProtoDeclareElement(org.web3d.x3d.jsail.Core.ExternProtoDeclare delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAppinfoElement().accept(v);
		getCssClassElement().accept(v);
		getDocumentationElement().accept(v);
		getFieldElement().accept(v);
		getNameElement().accept(v);
		getCssStyleElement().accept(v);
		getUrlElement().accept(v);
	}
	public SFStringElement getAppinfoElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getAppinfo()));
}
	public SFStringElement getCssClassElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssClass()));
}
	public SFStringElement getDocumentationElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDocumentation()));
}
	public MFNodeElement getFieldElement() { 		 return new MFNodeElement(delegate.getField());
}
	public SFStringElement getNameElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getName()));
}
	public SFStringElement getCssStyleElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getCssStyle()));
}
	public MFStringElement getUrlElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getUrl()));
}
}
