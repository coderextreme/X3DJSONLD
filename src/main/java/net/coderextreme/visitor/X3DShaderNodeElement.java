package net.coderextreme.visitor;
public class X3DShaderNodeElement implements org.web3d.x3d.sai.Shaders.X3DShaderNode ,  VisitableElement
{
	private org.web3d.x3d.sai.Shaders.X3DShaderNode delegate = null;
	public X3DShaderNodeElement(org.web3d.x3d.sai.Shaders.X3DShaderNode delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getISElement().accept(v);
		getIsSelectedElement().accept(v);
		getIsValidElement().accept(v);
		getLanguageElement().accept(v);
		getMetadataElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsSelectedElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsSelected()));
}
	public SFBoolElement getIsValidElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsValid()));
}
	public SFStringElement getLanguageElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getLanguage()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
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
