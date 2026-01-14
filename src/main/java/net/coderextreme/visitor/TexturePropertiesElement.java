package net.coderextreme.visitor;
public class TexturePropertiesElement extends org.web3d.x3d.jsail.Texturing.TextureProperties implements VisitableElement
{
	private org.web3d.x3d.jsail.Texturing.TextureProperties delegate = null;
	public TexturePropertiesElement(org.web3d.x3d.jsail.Texturing.TextureProperties delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAnisotropicDegreeElement().accept(v);
		getBorderColorElement().accept(v);
		getBorderWidthElement().accept(v);
		getBoundaryModeRElement().accept(v);
		getBoundaryModeSElement().accept(v);
		getBoundaryModeTElement().accept(v);
		getGenerateMipMapsElement().accept(v);
		getISElement().accept(v);
		getMagnificationFilterElement().accept(v);
		getMetadataElement().accept(v);
		getMinificationFilterElement().accept(v);
		getTextureCompressionElement().accept(v);
		getTexturePriorityElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFFloatElement getAnisotropicDegreeElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getAnisotropicDegree()));
}
	public SFColorRGBAElement getBorderColorElement() { 		 return new SFColorRGBAElement(new org.web3d.x3d.jsail.fields.SFColorRGBA(delegate.getBorderColor()));
}
	public SFInt32Element getBorderWidthElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getBorderWidth()));
}
	public SFStringElement getBoundaryModeRElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getBoundaryModeR()));
}
	public SFStringElement getBoundaryModeSElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getBoundaryModeS()));
}
	public SFStringElement getBoundaryModeTElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getBoundaryModeT()));
}
	public SFBoolElement getGenerateMipMapsElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getGenerateMipMaps()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFStringElement getMagnificationFilterElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getMagnificationFilter()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFStringElement getMinificationFilterElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getMinificationFilter()));
}
	public SFStringElement getTextureCompressionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getTextureCompression()));
}
	public SFFloatElement getTexturePriorityElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getTexturePriority()));
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
