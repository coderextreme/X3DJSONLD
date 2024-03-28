package net.coderextreme.visitor;
public class IsoSurfaceVolumeDataElement extends org.web3d.x3d.jsail.VolumeRendering.IsoSurfaceVolumeData implements VisitableElement
{
	private org.web3d.x3d.jsail.VolumeRendering.IsoSurfaceVolumeData delegate = null;
	public IsoSurfaceVolumeDataElement(org.web3d.x3d.jsail.VolumeRendering.IsoSurfaceVolumeData delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getBboxCenterElement().accept(v);
		getBboxDisplayElement().accept(v);
		getBboxSizeElement().accept(v);
		getContourStepSizeElement().accept(v);
		getDimensionsElement().accept(v);
		getGradientsElement().accept(v);
		getISElement().accept(v);
		getMetadataElement().accept(v);
		getRenderStyleElement().accept(v);
		getSurfaceToleranceElement().accept(v);
		getSurfaceValuesElement().accept(v);
		getVisibleElement().accept(v);
		getVoxelsElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFVec3fElement getBboxCenterElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBboxCenter()));
}
	public SFBoolElement getBboxDisplayElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getBboxDisplay()));
}
	public SFVec3fElement getBboxSizeElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getBboxSize()));
}
	public SFFloatElement getContourStepSizeElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getContourStepSize()));
}
	public SFVec3fElement getDimensionsElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getDimensions()));
}
	public SFNodeElement getGradientsElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getGradients()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public MFNodeElement getRenderStyleElement() { 		 return new MFNodeElement<renderStyle>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getRenderStyle()));
}
	public SFFloatElement getSurfaceToleranceElement() { 		 return new SFFloatElement(new org.web3d.x3d.jsail.fields.SFFloat(delegate.getSurfaceTolerance()));
}
	public MFFloatElement getSurfaceValuesElement() { 		 return new MFFloatElement(new org.web3d.x3d.jsail.fields.MFFloat(delegate.getSurfaceValues()));
}
	public SFBoolElement getVisibleElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getVisible()));
}
	public SFNodeElement getVoxelsElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getVoxels()));
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
