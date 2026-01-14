package net.coderextreme.visitor;
public class ProgramShaderElement extends org.web3d.x3d.jsail.Shaders.ProgramShader implements VisitableElement
{
	private org.web3d.x3d.jsail.Shaders.ProgramShader delegate = null;
	public ProgramShaderElement(org.web3d.x3d.jsail.Shaders.ProgramShader delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getISElement().accept(v);
		getIsSelectedElement().accept(v);
		getIsValidElement().accept(v);
		getLanguageElement().accept(v);
		getMetadataElement().accept(v);
		getProgramsElement().accept(v);
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
	public MFNodeElement getProgramsElement() { 		 return new MFNodeElement<programs>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getPrograms()));
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
