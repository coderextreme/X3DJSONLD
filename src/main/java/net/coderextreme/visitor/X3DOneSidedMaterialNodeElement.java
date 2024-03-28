package net.coderextreme.visitor;
public class X3DOneSidedMaterialNodeElement implements org.web3d.x3d.sai.Shape.X3DOneSidedMaterialNode ,  VisitableElement
{
	private org.web3d.x3d.sai.Shape.X3DOneSidedMaterialNode delegate = null;
	public X3DOneSidedMaterialNodeElement(org.web3d.x3d.sai.Shape.X3DOneSidedMaterialNode delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getEmissiveTextureMappingElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getNormalScaleElement().accept(v);
		getNormalTextureMappingElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFStringElement getEmissiveTextureMappingElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getEmissiveTextureMapping()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFFloatElement getNormalScaleElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getNormalScale()));
}
	public SFStringElement getNormalTextureMappingElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getNormalTextureMapping()));
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
