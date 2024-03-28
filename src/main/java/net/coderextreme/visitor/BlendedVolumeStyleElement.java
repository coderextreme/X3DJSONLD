package net.coderextreme.visitor;
public class BlendedVolumeStyleElement extends org.web3d.x3d.jsail.VolumeRendering.BlendedVolumeStyle implements VisitableElement
{
	private org.web3d.x3d.jsail.VolumeRendering.BlendedVolumeStyle delegate = null;
	public BlendedVolumeStyleElement(org.web3d.x3d.jsail.VolumeRendering.BlendedVolumeStyle delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getEnabledElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getRenderStyleElement().accept(v);
		getVoxelsElement().accept(v);
		getWeightConstant1Element().accept(v);
		getWeightConstant2Element().accept(v);
		getWeightFunction1Element().accept(v);
		getWeightFunction2Element().accept(v);
		getWeightTransferFunction1Element().accept(v);
		getWeightTransferFunction2Element().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFNodeElement getRenderStyleElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getRenderStyle()));
}
	public SFNodeElement getVoxelsElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getVoxels()));
}
	public SFFloatElement getWeightConstant1Element() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getWeightConstant1()));
}
	public SFFloatElement getWeightConstant2Element() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getWeightConstant2()));
}
	public SFStringElement getWeightFunction1Element() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getWeightFunction1()));
}
	public SFStringElement getWeightFunction2Element() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getWeightFunction2()));
}
	public SFNodeElement getWeightTransferFunction1Element() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getWeightTransferFunction1()));
}
	public SFNodeElement getWeightTransferFunction2Element() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getWeightTransferFunction2()));
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
