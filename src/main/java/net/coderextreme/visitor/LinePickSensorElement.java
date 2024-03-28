package net.coderextreme.visitor;
public class LinePickSensorElement extends org.web3d.x3d.jsail.Picking.LinePickSensor implements VisitableElement
{
	private org.web3d.x3d.jsail.Picking.LinePickSensor delegate = null;
	public LinePickSensorElement(org.web3d.x3d.jsail.Picking.LinePickSensor delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getDescriptionElement().accept(v);
		getEnabledElement().accept(v);
		getIntersectionTypeElement().accept(v);
		getISElement().accept(v);
		getIsActiveElement().accept(v);
		getMatchCriterionElement().accept(v);
		getMetadataElement().accept(v);
		getObjectTypeElement().accept(v);
		getPickedGeometryElement().accept(v);
		getPickedNormalElement().accept(v);
		getPickedPointElement().accept(v);
		getPickedTextureCoordinateElement().accept(v);
		getPickingGeometryElement().accept(v);
		getPickTargetElement().accept(v);
		getSortOrderElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFStringElement getIntersectionTypeElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getIntersectionType()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsActiveElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsActive()));
}
	public SFStringElement getMatchCriterionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getMatchCriterion()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public MFStringElement getObjectTypeElement() { 		 return new MFStringElement(new org.web3d.x3d.jsail.fields.MFString(delegate.getObjectType()));
}
	public MFNodeElement getPickedGeometryElement() { 		 return new MFNodeElement<pickedGeometry>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getPickedGeometry()));
}
	public MFVec3fElement getPickedNormalElement() { 		 return new MFVec3fElement(new org.web3d.x3d.jsail.fields.MFVec3f(delegate.getPickedNormal()));
}
	public MFVec3fElement getPickedPointElement() { 		 return new MFVec3fElement(new org.web3d.x3d.jsail.fields.MFVec3f(delegate.getPickedPoint()));
}
	public MFVec3fElement getPickedTextureCoordinateElement() { 		 return new MFVec3fElement(new org.web3d.x3d.jsail.fields.MFVec3f(delegate.getPickedTextureCoordinate()));
}
	public SFNodeElement getPickingGeometryElement() { 		 return new SFNodeElement(new org.web3d.x3d.jsail.fields.SFNode(delegate.getPickingGeometry()));
}
	public MFNodeElement getPickTargetElement() { 		 return new MFNodeElement<pickTarget>(new org.web3d.x3d.jsail.fields.MFNode(delegate.getPickTarget()));
}
	public SFStringElement getSortOrderElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getSortOrder()));
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
