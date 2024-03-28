package net.coderextreme.visitor;
public class PlaneSensorElement extends org.web3d.x3d.jsail.PointingDeviceSensor.PlaneSensor implements VisitableElement
{
	private org.web3d.x3d.jsail.PointingDeviceSensor.PlaneSensor delegate = null;
	public PlaneSensorElement(org.web3d.x3d.jsail.PointingDeviceSensor.PlaneSensor delegate) {
		this.delegate = delegate;
	}
	public void accept(Visitor v) {
		v.visit(this);
		getAutoOffsetElement().accept(v);
		getAxisRotationElement().accept(v);
		getDescriptionElement().accept(v);
		getEnabledElement().accept(v);
		getISElement().accept(v);
		getIsActiveElement().accept(v);
		getIsOverElement().accept(v);
		getMaxPositionElement().accept(v);
		getMetadataElement().accept(v);
		getMinPositionElement().accept(v);
		getOffsetElement().accept(v);
		getTrackPointElement().accept(v);
		getTranslationElement().accept(v);
		getDEFElement().accept(v);
		getUSEElement().accept(v);
		getCssClassElement().accept(v);
		getCssStyleElement().accept(v);
	}
	public SFBoolElement getAutoOffsetElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getAutoOffset()));
}
	public SFRotationElement getAxisRotationElement() { 		 return new SFRotationElement(new org.web3d.x3d.jsail.fields.SFRotation(delegate.getAxisRotation()));
}
	public SFStringElement getDescriptionElement() { 		 return new SFStringElement(new org.web3d.x3d.jsail.fields.SFString(delegate.getDescription()));
}
	public SFBoolElement getEnabledElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getEnabled()));
}
	public SFNodeElement getISElement() { 		 return new SFNodeElement(new ISElement(delegate.getIS()));
}
	public SFBoolElement getIsActiveElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsActive()));
}
	public SFBoolElement getIsOverElement() { 		 return new SFBoolElement(new org.web3d.x3d.jsail.fields.SFBool(delegate.getIsOver()));
}
	public SFVec2fElement getMaxPositionElement() { 		 return new SFVec2fElement(new org.web3d.x3d.jsail.fields.SFVec2f(delegate.getMaxPosition()));
}
	public SFNodeElement getMetadataElement() { 		 return new SFNodeElement(new X3DMetadataObjectElement(delegate.getMetadata()));
}
	public SFVec2fElement getMinPositionElement() { 		 return new SFVec2fElement(new org.web3d.x3d.jsail.fields.SFVec2f(delegate.getMinPosition()));
}
	public SFVec3fElement getOffsetElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getOffset()));
}
	public SFVec3fElement getTrackPointElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getTrackPoint()));
}
	public SFVec3fElement getTranslationElement() { 		 return new SFVec3fElement(new org.web3d.x3d.jsail.fields.SFVec3f(delegate.getTranslation()));
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
