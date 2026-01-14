package net.coderextreme.visitor;
public class HAnimHumanoidElement extends org.web3d.x3d.jsail.HAnim.HAnimHumanoid implements VisitableElement
{
	private org.web3d.x3d.jsail.HAnim.HAnimHumanoid delegate = null;
	public HAnimHumanoidElement(org.web3d.x3d.jsail.HAnim.HAnimHumanoid delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getBboxCenterElement().accept(v);
		getBboxDisplayElement().accept(v);
		getBboxSizeElement().accept(v);
		getCenterElement().accept(v);
		getDescriptionElement().accept(v);
		getInfoElement().accept(v);
		getISElement().accept(v);
		getJointBindingPositionsElement().accept(v);
		getJointBindingRotationsElement().accept(v);
		getJointBindingScalesElement().accept(v);
		getJointsElement().accept(v);
		getLoaElement().accept(v);
		getMetadataElement().accept(v);
		getMotionsElement().accept(v);
		getMotionsEnabledElement().accept(v);
		getNameElement().accept(v);
		getRotationElement().accept(v);
		getScaleElement().accept(v);
		getScaleOrientationElement().accept(v);
		getSegmentsElement().accept(v);
		getSitesElement().accept(v);
		getSkeletalConfigurationElement().accept(v);
		getSkeletonElement().accept(v);
		getSkinElement().accept(v);
		getSkinBindingCoordsElement().accept(v);
		getSkinBindingNormalsElement().accept(v);
		getSkinCoordElement().accept(v);
		getSkinNormalElement().accept(v);
		getTranslationElement().accept(v);
		getVersionElement().accept(v);
		getViewpointsElement().accept(v);
		getVisibleElement().accept(v);
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
	public SFVec3fElement getCenterElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getCenter()));
}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public MFStringElement getInfoElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getInfo()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public MFVec3fElement getJointBindingPositionsElement() { 		 return new MFVec3fElement(new org.web3d.x3d.jsail.fields.MFVec3f(delegate.getJointBindingPositions()));
}
	public MFRotationElement getJointBindingRotationsElement() { 		 return new MFRotationElement(new org.web3d.x3d.jsail.fields.MFRotation(delegate.getJointBindingRotations()));
}
	public MFVec3fElement getJointBindingScalesElement() { 		 return new MFVec3fElement(new org.web3d.x3d.jsail.fields.MFVec3f(delegate.getJointBindingScales()));
}
	public MFNodeElement getJointsElement() { 		 return new MFNodeElement<joints>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getJoints()));
}
	public SFInt32Element getLoaElement() { 		 return new SFInt32Element(new org.web3d.x3d.jsail.fields.SFInt32(delegate.getLoa()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public MFNodeElement getMotionsElement() { 		 return new MFNodeElement<motions>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getMotions()));
}
	public MFBoolElement getMotionsEnabledElement() { 		 return new MFBoolElement(new org.web3d.x3d.jsail.fields.MFBool(delegate.getMotionsEnabled()));
}
	public SFStringElement getNameElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getName()));
}
	public SFRotationElement getRotationElement() { 		 return new SFRotationElement(new org.web3d.x3d.jsail.fields.SFRotation(delegate.getRotation()));
}
	public SFVec3fElement getScaleElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getScale()));
}
	public SFRotationElement getScaleOrientationElement() { 		 return new SFRotationElement(new org.web3d.x3d.jsail.fields.SFRotation(delegate.getScaleOrientation()));
}
	public MFNodeElement getSegmentsElement() { 		 return new MFNodeElement<segments>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getSegments()));
}
	public MFNodeElement getSitesElement() { 		 return new MFNodeElement<sites>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getSites()));
}
	public SFStringElement getSkeletalConfigurationElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getSkeletalConfiguration()));
}
	public MFNodeElement getSkeletonElement() { 		 return new MFNodeElement<skeleton>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getSkeleton()));
}
	public MFNodeElement getSkinElement() { 		 return new MFNodeElement<skin>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getSkin()));
}
	public SFNodeElement getSkinBindingCoordsElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getSkinBindingCoords()));
}
	public SFNodeElement getSkinBindingNormalsElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getSkinBindingNormals()));
}
	public SFNodeElement getSkinCoordElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getSkinCoord()));
}
	public SFNodeElement getSkinNormalElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getSkinNormal()));
}
	public SFVec3fElement getTranslationElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getTranslation()));
}
	public SFStringElement getVersionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getVersion()));
}
	public MFNodeElement getViewpointsElement() { 		 return new MFNodeElement<viewpoints>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getViewpoints()));
}
	public SFBoolElement getVisibleElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getVisible()));
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
