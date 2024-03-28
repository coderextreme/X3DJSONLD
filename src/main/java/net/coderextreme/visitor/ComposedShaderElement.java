package net.coderextreme.visitor;
public class ComposedShaderElement extends org.web3d.x3d.jsail.Shaders.ComposedShader implements VisitableElement
{
	private org.web3d.x3d.jsail.Shaders.ComposedShader delegate = null;
	public ComposedShaderElement(org.web3d.x3d.jsail.Shaders.ComposedShader delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getFieldElement().accept(v);
		getISElement().accept(v);
		getIsSelectedElement().accept(v);
		getIsValidElement().accept(v);
		getLanguageElement().accept(v);
		getMetadataElement().accept(v);
		getPartsElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public MFNodeElement getFieldElement() { 		 return new MFNodeElement(delegate.getField());
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
	public MFNodeElement getPartsElement() { 		 return new MFNodeElement<parts>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getParts()));
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
