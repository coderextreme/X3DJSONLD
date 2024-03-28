package net.coderextreme.visitor;
public class X3DProgrammableShaderObjectElement implements org.web3d.x3d.sai.Shaders.X3DProgrammableShaderObject ,  VisitableElement
{
	private org.web3d.x3d.sai.Shaders.X3DProgrammableShaderObject delegate = null;
	public X3DProgrammableShaderObjectElement(org.web3d.x3d.sai.Shaders.X3DProgrammableShaderObject delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
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
