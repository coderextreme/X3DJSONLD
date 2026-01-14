package net.coderextreme.visitor;
public class TextureTransformElement extends org.web3d.x3d.jsail.Texturing.TextureTransform implements VisitableElement
{
	private org.web3d.x3d.jsail.Texturing.TextureTransform delegate = null;
	public TextureTransformElement(org.web3d.x3d.jsail.Texturing.TextureTransform delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getCenterElement().accept(v);
		getISElement().accept(v);
		getMappingElement().accept(v);
		getMetadataElement().accept(v);
		getRotationElement().accept(v);
		getScaleElement().accept(v);
		getTranslationElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFVec2fElement getCenterElement() { 		 return new SFVec2fElement(new org.web3d.x3d.jsail.fields.SFVec2f(delegate.getCenter()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFStringElement getMappingElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getMapping()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFFloatElement getRotationElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getRotation()));
}
	public SFVec2fElement getScaleElement() { 		 return new SFVec2fElement(new org.web3d.x3d.jsail.fields.SFVec2f(delegate.getScale()));
}
	public SFVec2fElement getTranslationElement() { 		 return new SFVec2fElement(new org.web3d.x3d.jsail.fields.SFVec2f(delegate.getTranslation()));
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
