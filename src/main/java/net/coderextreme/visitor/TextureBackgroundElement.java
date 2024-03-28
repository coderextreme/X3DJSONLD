package net.coderextreme.visitor;
public class TextureBackgroundElement extends org.web3d.x3d.jsail.EnvironmentalEffects.TextureBackground implements VisitableElement
{
	private org.web3d.x3d.jsail.EnvironmentalEffects.TextureBackground delegate = null;
	public TextureBackgroundElement(org.web3d.x3d.jsail.EnvironmentalEffects.TextureBackground delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getBackTextureElement().accept(v);
		getBindTimeElement().accept(v);
		getBottomTextureElement().accept(v);
		getFrontTextureElement().accept(v);
		getGroundAngleElement().accept(v);
		getGroundColorElement().accept(v);
		getISElement().accept(v);
		getIsBoundElement().accept(v);
		getLeftTextureElement().accept(v);
		getMetadataElement().accept(v);
		getRightTextureElement().accept(v);
		getSkyAngleElement().accept(v);
		getSkyColorElement().accept(v);
		getTopTextureElement().accept(v);
		getTransparencyElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFNodeElement getBackTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getBackTexture()));
}
	public SFTimeElement getBindTimeElement() { 		 return new SFTimeElement(new org.web3d.x3d.jsail.fields.SFTime(delegate.getBindTime()));
}
	public SFNodeElement getBottomTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getBottomTexture()));
}
	public SFNodeElement getFrontTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getFrontTexture()));
}
	public MFFloatElement getGroundAngleElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getGroundAngle()));
}
	public MFColorElement getGroundColorElement() { 		 return new MFColorElement(new org.web3d.x3d.jsail.fields.MFColor(delegate.getGroundColor()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsBoundElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsBound()));
}
	public SFNodeElement getLeftTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getLeftTexture()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFNodeElement getRightTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getRightTexture()));
}
	public MFFloatElement getSkyAngleElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getSkyAngle()));
}
	public MFColorElement getSkyColorElement() { 		 return new MFColorElement(new org.web3d.x3d.jsail.fields.MFColor(delegate.getSkyColor()));
}
	public SFNodeElement getTopTextureElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getTopTexture()));
}
	public SFFloatElement getTransparencyElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getTransparency()));
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
