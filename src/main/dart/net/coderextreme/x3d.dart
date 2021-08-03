// Do not modify
// Copyright 2021 by John Carlson.  All rights reserved.
class X3DNode extends SFNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DNode({this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DGeometryNode extends X3DNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DGeometryNode({this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DParametricGeometryNode extends X3DGeometryNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DParametricGeometryNode({this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DNurbsSurfaceGeometryNode extends X3DParametricGeometryNode {
    SFNode? controlPoint_;
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? solid_;
    SFNode? texCoord_;
    SFBool? uClosed_;
    SFInt32? uDimension_;
    MFDouble? uKnot_;
    SFInt32? uOrder_;
    SFInt32? uTessellation_;
    SFBool? vClosed_;
    SFInt32? vDimension_;
    MFDouble? vKnot_;
    SFInt32? vOrder_;
    SFInt32? vTessellation_;
    MFDouble? weight_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DNurbsSurfaceGeometryNode({this.controlPoint_, this.IS_, this.metadata_, this.solid_, this.texCoord_, this.uClosed_, this.uDimension_, this.uKnot_, this.uOrder_, this.uTessellation_, this.vClosed_, this.vDimension_, this.vKnot_, this.vOrder_, this.vTessellation_, this.weight_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DChildNode extends X3DNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DChildNode({this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DInterpolatorNode extends X3DChildNode {
    SFNode? IS_;
    MFFloat? key_;
    SFNode? metadata_;
        SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DInterpolatorNode({this.IS_, this.key_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class CoordinateInterpolator extends X3DInterpolatorNode {
    SFNode? IS_;
    MFFloat? key_;
    MFVec3f? keyValue_;
    SFNode? metadata_;
        MFVec3f? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    CoordinateInterpolator({this.IS_, this.key_, this.keyValue_, this.metadata_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DGeometricPropertyNode extends X3DNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DGeometricPropertyNode({this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DTextureCoordinateNode extends X3DGeometricPropertyNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DTextureCoordinateNode({this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DSingleTextureCoordinateNode extends X3DTextureCoordinateNode {
    SFNode? IS_;
    SFString? mapping_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DSingleTextureCoordinateNode({this.IS_, this.mapping_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class TextureCoordinate extends X3DSingleTextureCoordinateNode {
    SFNode? IS_;
    SFString? mapping_;
    SFNode? metadata_;
    MFVec2f? point_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TextureCoordinate({this.IS_, this.mapping_, this.metadata_, this.point_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DLightNode extends X3DChildNode {
    SFFloat? ambientIntensity_;
    SFColor? color_;
    SFFloat? intensity_;
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? on_;
    SFFloat? shadowIntensity_;
    SFBool? shadows_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DLightNode({this.ambientIntensity_, this.color_, this.intensity_, this.IS_, this.metadata_, this.on_, this.shadowIntensity_, this.shadows_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class EnvironmentLight extends X3DLightNode {
    SFFloat? ambientIntensity_;
    SFColor? color_;
    SFNode? diffuse_;
    MFFloat? diffuseCoefficients_;
    SFNode? diffuseTexture_;
    SFBool? global_;
    SFFloat? intensity_;
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? on_;
    SFRotation? rotation_;
    SFFloat? shadowIntensity_;
    SFBool? shadows_;
    SFNode? specularTexture_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    EnvironmentLight({this.ambientIntensity_, this.color_, this.diffuse_, this.diffuseCoefficients_, this.diffuseTexture_, this.global_, this.intensity_, this.IS_, this.metadata_, this.on_, this.rotation_, this.shadowIntensity_, this.shadows_, this.specularTexture_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DUrlObject {
    SFTime? autoRefresh_;
    SFTime? autoRefreshTimeLimit_;
    SFString? description_;
    SFBool? load_;
    MFString? url_;
    X3DUrlObject({this.autoRefresh_, this.autoRefreshTimeLimit_, this.description_, this.load_, this.url_}) {
    }
}

class X3DSoundNode extends X3DChildNode {
    SFString? description_;
    SFBool? enabled_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DSoundNode({this.description_, this.enabled_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DTimeDependentNode extends X3DChildNode {
    SFString? description_;
    SFTime? elapsedTime_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isPaused_;
    SFNode? metadata_;
    SFTime? pauseTime_;
    SFTime? resumeTime_;
    SFTime? startTime_;
    SFTime? stopTime_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DTimeDependentNode({this.description_, this.elapsedTime_, this.IS_, this.isActive_, this.isPaused_, this.metadata_, this.pauseTime_, this.resumeTime_, this.startTime_, this.stopTime_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DSoundSourceNode extends X3DTimeDependentNode implements X3DSoundNode {
    SFString? description_;
    SFTime? elapsedTime_;
    SFBool? enabled_;
    SFFloat? gain_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isPaused_;
    SFNode? metadata_;
    SFTime? pauseTime_;
    SFTime? resumeTime_;
    SFTime? startTime_;
    SFTime? stopTime_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DSoundSourceNode({this.description_, this.elapsedTime_, this.enabled_, this.gain_, this.IS_, this.isActive_, this.isPaused_, this.metadata_, this.pauseTime_, this.resumeTime_, this.startTime_, this.stopTime_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class BufferAudioSource extends X3DSoundSourceNode implements X3DUrlObject {
    SFTime? autoRefresh_;
    SFTime? autoRefreshTimeLimit_;
    MFFloat? buffer_;
    SFTime? bufferDuration_;
    SFInt32? bufferlength_;
    SFInt32? channelCount_;
    SFString? channelCountMode_;
    SFString? channelInterpretation_;
    List<SFNode>? children_;
    SFString? description_;
    SFFloat? detune_;
    SFTime? elapsedTime_;
    SFBool? enabled_;
    SFFloat? gain_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isPaused_;
    SFInt32? length_;
    SFBool? load_;
    SFBool? loop_;
    SFFloat? loopEnd_;
    SFFloat? loopStart_;
    SFNode? metadata_;
    SFInt32? numberOfChannels_;
    SFTime? pauseTime_;
    SFFloat? playbackRate_;
    SFTime? resumeTime_;
    SFFloat? sampleRate_;
    SFTime? startTime_;
    SFTime? stopTime_;
    MFString? url_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    BufferAudioSource({this.autoRefresh_, this.autoRefreshTimeLimit_, this.buffer_, this.bufferDuration_, this.bufferlength_, this.channelCount_, this.channelCountMode_, this.channelInterpretation_, this.children_, this.description_, this.detune_, this.elapsedTime_, this.enabled_, this.gain_, this.IS_, this.isActive_, this.isPaused_, this.length_, this.load_, this.loop_, this.loopEnd_, this.loopStart_, this.metadata_, this.numberOfChannels_, this.pauseTime_, this.playbackRate_, this.resumeTime_, this.sampleRate_, this.startTime_, this.stopTime_, this.url_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ColorInterpolator extends X3DInterpolatorNode {
    SFNode? IS_;
    MFFloat? key_;
    MFColor? keyValue_;
    SFNode? metadata_;
        SFColor? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ColorInterpolator({this.IS_, this.key_, this.keyValue_, this.metadata_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DSensorNode extends X3DChildNode {
    SFBool? enabled_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DSensorNode({this.enabled_, this.IS_, this.isActive_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DKeyDeviceSensorNode extends X3DSensorNode {
    SFBool? enabled_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DKeyDeviceSensorNode({this.enabled_, this.IS_, this.isActive_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class StringSensor extends X3DKeyDeviceSensorNode {
    SFBool? deletionAllowed_;
    SFBool? enabled_;
    SFString? enteredText_;
    SFString? finalText_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    StringSensor({this.deletionAllowed_, this.enabled_, this.enteredText_, this.finalText_, this.IS_, this.isActive_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DComposedGeometryNode extends X3DGeometryNode {
    MFNode? attrib_;
    SFBool? ccw_;
    SFNode? color_;
    SFBool? colorPerVertex_;
    SFNode? coord_;
    SFNode? fogCoord_;
    SFNode? IS_;
    SFNode? metadata_;
    SFNode? normal_;
    SFBool? normalPerVertex_;
    SFBool? solid_;
    SFNode? texCoord_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DComposedGeometryNode({this.attrib_, this.ccw_, this.color_, this.colorPerVertex_, this.coord_, this.fogCoord_, this.IS_, this.metadata_, this.normal_, this.normalPerVertex_, this.solid_, this.texCoord_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class IndexedQuadSet extends X3DComposedGeometryNode {
    MFNode? attrib_;
    SFBool? ccw_;
    SFNode? color_;
    SFBool? colorPerVertex_;
    SFNode? coord_;
    SFNode? fogCoord_;
    MFInt32? index_;
    SFNode? IS_;
    SFNode? metadata_;
    SFNode? normal_;
    SFBool? normalPerVertex_;
        SFBool? solid_;
    SFNode? texCoord_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    IndexedQuadSet({this.attrib_, this.ccw_, this.color_, this.colorPerVertex_, this.coord_, this.fogCoord_, this.index_, this.IS_, this.metadata_, this.normal_, this.normalPerVertex_, this.solid_, this.texCoord_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DBindableNode extends X3DChildNode {
    SFTime? bindTime_;
    SFNode? IS_;
    SFBool? isBound_;
    SFNode? metadata_;
        SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DBindableNode({this.bindTime_, this.IS_, this.isBound_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DViewpointNode extends X3DBindableNode {
    SFTime? bindTime_;
    SFString? description_;
    SFFloat? farDistance_;
    SFNode? IS_;
    SFBool? isBound_;
    SFBool? jump_;
    SFNode? metadata_;
    SFNode? navigationInfo_;
    SFFloat? nearDistance_;
    SFRotation? orientation_;
    SFBool? retainUserOffsets_;
        SFBool? viewAll_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DViewpointNode({this.bindTime_, this.description_, this.farDistance_, this.IS_, this.isBound_, this.jump_, this.metadata_, this.navigationInfo_, this.nearDistance_, this.orientation_, this.retainUserOffsets_, this.viewAll_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Viewpoint extends X3DViewpointNode {
    SFTime? bindTime_;
    SFVec3f? centerOfRotation_;
    SFString? description_;
    SFFloat? farDistance_;
    SFFloat? fieldOfView_;
    SFNode? IS_;
    SFBool? isBound_;
    SFBool? jump_;
    SFNode? metadata_;
    SFNode? navigationInfo_;
    SFFloat? nearDistance_;
    SFRotation? orientation_;
    SFVec3f? position_;
    SFBool? retainUserOffsets_;
        SFBool? viewAll_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Viewpoint({this.bindTime_, this.centerOfRotation_, this.description_, this.farDistance_, this.fieldOfView_, this.IS_, this.isBound_, this.jump_, this.metadata_, this.navigationInfo_, this.nearDistance_, this.orientation_, this.position_, this.retainUserOffsets_, this.viewAll_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DParticleEmitterNode extends X3DNode {
    SFNode? IS_;
    SFFloat? mass_;
    SFNode? metadata_;
    SFFloat? speed_;
    SFFloat? surfaceArea_;
    SFFloat? variation_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DParticleEmitterNode({this.IS_, this.mass_, this.metadata_, this.speed_, this.surfaceArea_, this.variation_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SurfaceEmitter extends X3DParticleEmitterNode {
    MFInt32? coordIndex_;
    SFNode? IS_;
    SFFloat? mass_;
    SFNode? metadata_;
        SFFloat? speed_;
    SFNode? surface_;
    SFFloat? surfaceArea_;
    SFFloat? variation_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    SurfaceEmitter({this.coordIndex_, this.IS_, this.mass_, this.metadata_, this.speed_, this.surface_, this.surfaceArea_, this.variation_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DAppearanceChildNode extends X3DNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DAppearanceChildNode({this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DTextureTransformNode extends X3DAppearanceChildNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DTextureTransformNode({this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class TextureTransform3D extends X3DTextureTransformNode {
    SFVec3f? center_;
    SFNode? IS_;
    SFNode? metadata_;
    SFRotation? rotation_;
    SFVec3f? scale_;
    SFVec3f? translation_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TextureTransform3D({this.center_, this.IS_, this.metadata_, this.rotation_, this.scale_, this.translation_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SFString {
    String? value_;
    SFString(this.value_) {
    }
}

class MFNode  {
    List<SFNode>? value_;
    MFNode(this.value_) {
    }
}

class X3DSoundProcessingNode extends X3DTimeDependentNode implements X3DSoundNode {
    SFInt32? channelCount_;
    SFString? channelCountMode_;
    SFString? channelInterpretation_;
    SFString? description_;
    SFTime? elapsedTime_;
    SFBool? enabled_;
    SFFloat? gain_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isPaused_;
    SFNode? metadata_;
    SFTime? pauseTime_;
    SFTime? resumeTime_;
    SFTime? startTime_;
    SFTime? stopTime_;
    SFTime? tailTime_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DSoundProcessingNode({this.channelCount_, this.channelCountMode_, this.channelInterpretation_, this.description_, this.elapsedTime_, this.enabled_, this.gain_, this.IS_, this.isActive_, this.isPaused_, this.metadata_, this.pauseTime_, this.resumeTime_, this.startTime_, this.stopTime_, this.tailTime_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class WaveShaper extends X3DSoundProcessingNode {
    SFInt32? channelCount_;
    SFString? channelCountMode_;
    SFString? channelInterpretation_;
    List<SFNode>? children_;
    SFString? description_;
    SFTime? elapsedTime_;
    SFBool? enabled_;
    SFFloat? gain_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isPaused_;
    SFNode? metadata_;
    SFString? oversample_;
    SFTime? pauseTime_;
    SFTime? resumeTime_;
    SFTime? startTime_;
    SFTime? stopTime_;
    SFTime? tailTime_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    WaveShaper({this.channelCount_, this.channelCountMode_, this.channelInterpretation_, this.children_, this.description_, this.elapsedTime_, this.enabled_, this.gain_, this.IS_, this.isActive_, this.isPaused_, this.metadata_, this.oversample_, this.pauseTime_, this.resumeTime_, this.startTime_, this.stopTime_, this.tailTime_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DPickSensorNode extends X3DSensorNode {
    SFBool? enabled_;
    SFString? intersectionType_;
    SFNode? IS_;
    SFBool? isActive_;
    SFString? matchCriterion_;
    SFNode? metadata_;
    MFString? objectType_;
    MFNode? pickedGeometry_;
    SFNode? pickingGeometry_;
    MFNode? pickTarget_;
    SFString? sortOrder_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DPickSensorNode({this.enabled_, this.intersectionType_, this.IS_, this.isActive_, this.matchCriterion_, this.metadata_, this.objectType_, this.pickedGeometry_, this.pickingGeometry_, this.pickTarget_, this.sortOrder_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class PrimitivePickSensor extends X3DPickSensorNode {
    SFBool? enabled_;
    SFString? intersectionType_;
    SFNode? IS_;
    SFBool? isActive_;
    SFString? matchCriterion_;
    SFNode? metadata_;
    MFString? objectType_;
    MFNode? pickedGeometry_;
    SFNode? pickingGeometry_;
    MFNode? pickTarget_;
    SFString? sortOrder_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    PrimitivePickSensor({this.enabled_, this.intersectionType_, this.IS_, this.isActive_, this.matchCriterion_, this.metadata_, this.objectType_, this.pickedGeometry_, this.pickingGeometry_, this.pickTarget_, this.sortOrder_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DProductStructureChildNode extends X3DChildNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? name_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DProductStructureChildNode({this.IS_, this.metadata_, this.name_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DBoundedObject {
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFBool? visible_;
    X3DBoundedObject({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.visible_}) {
    }
}

class X3DGroupingNode extends X3DChildNode implements X3DBoundedObject {
        SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    List<SFNode>? children_;
    SFNode? IS_;
    SFNode? metadata_;
        SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DGroupingNode({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.children_, this.IS_, this.metadata_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class CADAssembly extends X3DGroupingNode implements X3DProductStructureChildNode {
        SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    List<SFNode>? children_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? name_;
        SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    CADAssembly({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.children_, this.IS_, this.metadata_, this.name_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ExplosionEmitter extends X3DParticleEmitterNode {
    SFNode? IS_;
    SFFloat? mass_;
    SFNode? metadata_;
    SFVec3f? position_;
    SFFloat? speed_;
    SFFloat? surfaceArea_;
    SFFloat? variation_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ExplosionEmitter({this.IS_, this.mass_, this.metadata_, this.position_, this.speed_, this.surfaceArea_, this.variation_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class PointProperties extends X3DAppearanceChildNode {
    SFVec3f? attenuation_;
    SFNode? IS_;
    SFNode? metadata_;
    SFFloat? pointSizeMaxValue_;
    SFFloat? pointSizeMinValue_;
    SFFloat? pointSizeScaleFactor_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    PointProperties({this.attenuation_, this.IS_, this.metadata_, this.pointSizeMaxValue_, this.pointSizeMinValue_, this.pointSizeScaleFactor_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class PointEmitter extends X3DParticleEmitterNode {
    SFVec3f? direction_;
    SFNode? IS_;
    SFFloat? mass_;
    SFNode? metadata_;
    SFVec3f? position_;
    SFFloat? speed_;
    SFFloat? surfaceArea_;
    SFFloat? variation_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    PointEmitter({this.direction_, this.IS_, this.mass_, this.metadata_, this.position_, this.speed_, this.surfaceArea_, this.variation_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DTextureProjectorNode extends X3DLightNode {
    SFFloat? ambientIntensity_;
    SFFloat? aspectRatio_;
    SFColor? color_;
    SFString? description_;
    SFVec3f? direction_;
    SFFloat? farDistance_;
    SFBool? global_;
    SFFloat? intensity_;
    SFNode? IS_;
    SFVec3f? location_;
    SFNode? metadata_;
    SFFloat? nearDistance_;
    SFBool? on_;
    SFFloat? shadowIntensity_;
    SFBool? shadows_;
    SFNode? texture_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DTextureProjectorNode({this.ambientIntensity_, this.aspectRatio_, this.color_, this.description_, this.direction_, this.farDistance_, this.global_, this.intensity_, this.IS_, this.location_, this.metadata_, this.nearDistance_, this.on_, this.shadowIntensity_, this.shadows_, this.texture_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class TextureProjector extends X3DTextureProjectorNode {
    SFFloat? ambientIntensity_;
    SFFloat? aspectRatio_;
    SFColor? color_;
    SFString? description_;
    SFVec3f? direction_;
    SFFloat? farDistance_;
    SFFloat? fieldOfView_;
    SFBool? global_;
    SFFloat? intensity_;
    SFNode? IS_;
    SFVec3f? location_;
    SFNode? metadata_;
    SFFloat? nearDistance_;
    SFBool? on_;
    SFFloat? shadowIntensity_;
    SFBool? shadows_;
    SFNode? texture_;
    SFVec3f? upVector_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TextureProjector({this.ambientIntensity_, this.aspectRatio_, this.color_, this.description_, this.direction_, this.farDistance_, this.fieldOfView_, this.global_, this.intensity_, this.IS_, this.location_, this.metadata_, this.nearDistance_, this.on_, this.shadowIntensity_, this.shadows_, this.texture_, this.upVector_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Collision extends X3DGroupingNode implements X3DSensorNode {
        SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    List<SFNode>? children_;
    SFTime? collideTime_;
    SFBool? enabled_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
    SFNode? proxy_;
        SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Collision({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.children_, this.collideTime_, this.enabled_, this.IS_, this.isActive_, this.metadata_, this.proxy_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Text extends X3DGeometryNode {
    SFNode? fontStyle_;
    SFNode? IS_;
    MFFloat? length_;
    MFVec2f? lineBounds_;
    SFFloat? maxExtent_;
    SFNode? metadata_;
    SFVec3f? origin_;
    SFBool? solid_;
    MFString? string_;
    SFVec2f? textBounds_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Text({this.fontStyle_, this.IS_, this.length_, this.lineBounds_, this.maxExtent_, this.metadata_, this.origin_, this.solid_, this.string_, this.textBounds_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DFontStyleNode extends X3DNode {
    SFString? class_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    X3DFontStyleNode({this.class_, this.IS_, this.metadata_, this.DEF_, this.USE_}) {
    }
}

class ScreenFontStyle extends X3DFontStyleNode {
    SFString? class_;
    MFString? family_;
    SFBool? horizontal_;
    SFNode? IS_;
    MFString? justify_;
    SFString? language_;
    SFBool? leftToRight_;
    SFNode? metadata_;
    SFFloat? pointSize_;
    SFFloat? spacing_;
    SFString? style_;
    SFBool? topToBottom_;
    SFString? DEF_;
    SFString? USE_;
    ScreenFontStyle({this.class_, this.family_, this.horizontal_, this.IS_, this.justify_, this.language_, this.leftToRight_, this.metadata_, this.pointSize_, this.spacing_, this.style_, this.topToBottom_, this.DEF_, this.USE_}) {
    }
}

class Circle2D extends X3DGeometryNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFFloat? radius_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Circle2D({this.IS_, this.metadata_, this.radius_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class GeoLocation extends X3DGroupingNode {
        SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    List<SFNode>? children_;
    SFVec3d? geoCoords_;
    SFNode? geoOrigin_;
    MFString? geoSystem_;
    SFNode? IS_;
    SFNode? metadata_;
        SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    GeoLocation({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.children_, this.geoCoords_, this.geoOrigin_, this.geoSystem_, this.IS_, this.metadata_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DVolumeRenderStyleNode extends X3DNode {
    SFBool? enabled_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DVolumeRenderStyleNode({this.enabled_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ProjectionVolumeStyle extends X3DVolumeRenderStyleNode {
    SFBool? enabled_;
    SFFloat? intensityThreshold_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? type_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ProjectionVolumeStyle({this.enabled_, this.intensityThreshold_, this.IS_, this.metadata_, this.type_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DColorNode extends X3DGeometricPropertyNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DColorNode({this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DComposableVolumeRenderStyleNode extends X3DVolumeRenderStyleNode {
    SFBool? enabled_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DComposableVolumeRenderStyleNode({this.enabled_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class CartoonVolumeStyle extends X3DComposableVolumeRenderStyleNode {
    SFInt32? colorSteps_;
    SFBool? enabled_;
    SFNode? IS_;
    SFNode? metadata_;
    SFColorRGBA? orthogonalColor_;
    SFColorRGBA? parallelColor_;
    SFNode? surfaceNormals_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    CartoonVolumeStyle({this.colorSteps_, this.enabled_, this.IS_, this.metadata_, this.orthogonalColor_, this.parallelColor_, this.surfaceNormals_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class KeySensor extends X3DKeyDeviceSensorNode {
    SFInt32? actionKeyPress_;
    SFInt32? actionKeyRelease_;
    SFBool? altKey_;
    SFBool? controlKey_;
    SFBool? enabled_;
    SFNode? IS_;
    SFBool? isActive_;
    SFString? keyPress_;
    SFString? keyRelease_;
    SFNode? metadata_;
    SFBool? shiftKey_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    KeySensor({this.actionKeyPress_, this.actionKeyRelease_, this.altKey_, this.controlKey_, this.enabled_, this.IS_, this.isActive_, this.keyPress_, this.keyRelease_, this.metadata_, this.shiftKey_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DNBodyCollisionSpaceNode extends X3DNode implements X3DBoundedObject {
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFBool? enabled_;
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DNBodyCollisionSpaceNode({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.enabled_, this.IS_, this.metadata_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class CollisionSpace extends X3DNBodyCollisionSpaceNode {
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    MFNode? collidables_;
    SFBool? enabled_;
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? useGeometry_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    CollisionSpace({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.collidables_, this.enabled_, this.IS_, this.metadata_, this.useGeometry_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class NurbsTextureCoordinate extends X3DNode {
    MFVec2f? controlPoint_;
    SFNode? IS_;
    SFNode? metadata_;
    SFInt32? uDimension_;
    MFDouble? uKnot_;
    SFInt32? uOrder_;
    SFInt32? vDimension_;
    MFDouble? vKnot_;
    SFInt32? vOrder_;
    MFFloat? weight_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    NurbsTextureCoordinate({this.controlPoint_, this.IS_, this.metadata_, this.uDimension_, this.uKnot_, this.uOrder_, this.vDimension_, this.vKnot_, this.vOrder_, this.weight_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DNetworkSensorNode extends X3DSensorNode {
    SFBool? enabled_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DNetworkSensorNode({this.enabled_, this.IS_, this.isActive_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DFollowerNode extends X3DChildNode {
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DFollowerNode({this.IS_, this.isActive_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DChaserNode extends X3DFollowerNode {
    SFTime? duration_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DChaserNode({this.duration_, this.IS_, this.isActive_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ColorChaser extends X3DChaserNode {
    SFTime? duration_;
    SFColor? initialDestination_;
    SFColor? initialValue_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
            SFColor? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ColorChaser({this.duration_, this.initialDestination_, this.initialValue_, this.IS_, this.isActive_, this.metadata_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DPointingDeviceSensorNode extends X3DSensorNode {
    SFString? description_;
    SFBool? enabled_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isOver_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DPointingDeviceSensorNode({this.description_, this.enabled_, this.IS_, this.isActive_, this.isOver_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DTouchSensorNode extends X3DPointingDeviceSensorNode {
    SFString? description_;
    SFBool? enabled_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isOver_;
    SFNode? metadata_;
    SFTime? touchTime_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DTouchSensorNode({this.description_, this.enabled_, this.IS_, this.isActive_, this.isOver_, this.metadata_, this.touchTime_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class TouchSensor extends X3DTouchSensorNode {
    SFString? description_;
    SFBool? enabled_;
    SFVec3f? hitNormal_;
    SFVec3f? hitPoint_;
    SFVec2f? hitTexCoord_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isOver_;
    SFNode? metadata_;
    SFTime? touchTime_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TouchSensor({this.description_, this.enabled_, this.hitNormal_, this.hitPoint_, this.hitTexCoord_, this.IS_, this.isActive_, this.isOver_, this.metadata_, this.touchTime_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class LoadSensor extends X3DNetworkSensorNode {
    List<SFNode>? children_;
    SFBool? enabled_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isLoaded_;
    SFTime? loadTime_;
    SFNode? metadata_;
    SFFloat? progress_;
    SFTime? timeOut_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    LoadSensor({this.children_, this.enabled_, this.IS_, this.isActive_, this.isLoaded_, this.loadTime_, this.metadata_, this.progress_, this.timeOut_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DViewportNode extends X3DGroupingNode {
        SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    List<SFNode>? children_;
    SFNode? IS_;
    SFNode? metadata_;
        SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DViewportNode({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.children_, this.IS_, this.metadata_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Viewport extends X3DViewportNode {
        SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    List<SFNode>? children_;
    MFFloat? clipBoundary_;
    SFNode? IS_;
    SFNode? metadata_;
        SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Viewport({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.children_, this.clipBoundary_, this.IS_, this.metadata_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DRigidJointNode extends X3DNode {
    SFNode? body1_;
    SFNode? body2_;
    MFString? forceOutput_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DRigidJointNode({this.body1_, this.body2_, this.forceOutput_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class DoubleAxisHingeJoint extends X3DRigidJointNode {
    SFVec3f? anchorPoint_;
    SFVec3f? axis1_;
    SFVec3f? axis2_;
    SFNode? body1_;
    SFVec3f? body1AnchorPoint_;
    SFVec3f? body1Axis_;
    SFNode? body2_;
    SFVec3f? body2AnchorPoint_;
    SFVec3f? body2Axis_;
    SFFloat? desiredAngularVelocity1_;
    SFFloat? desiredAngularVelocity2_;
    MFString? forceOutput_;
    SFFloat? hinge1Angle_;
    SFFloat? hinge1AngleRate_;
    SFFloat? hinge2Angle_;
    SFFloat? hinge2AngleRate_;
    SFNode? IS_;
    SFFloat? maxAngle1_;
    SFFloat? maxTorque1_;
    SFFloat? maxTorque2_;
    SFNode? metadata_;
    SFFloat? minAngle1_;
    SFFloat? stop1Bounce_;
    SFFloat? stop1ConstantForceMix_;
    SFFloat? stop1ErrorCorrection_;
    SFFloat? suspensionErrorCorrection_;
    SFFloat? suspensionForce_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    DoubleAxisHingeJoint({this.anchorPoint_, this.axis1_, this.axis2_, this.body1_, this.body1AnchorPoint_, this.body1Axis_, this.body2_, this.body2AnchorPoint_, this.body2Axis_, this.desiredAngularVelocity1_, this.desiredAngularVelocity2_, this.forceOutput_, this.hinge1Angle_, this.hinge1AngleRate_, this.hinge2Angle_, this.hinge2AngleRate_, this.IS_, this.maxAngle1_, this.maxTorque1_, this.maxTorque2_, this.metadata_, this.minAngle1_, this.stop1Bounce_, this.stop1ConstantForceMix_, this.stop1ErrorCorrection_, this.suspensionErrorCorrection_, this.suspensionForce_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DAppearanceNode extends X3DNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DAppearanceNode({this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Appearance extends X3DAppearanceNode {
    SFNode? acousticProperties_;
    SFFloat? alphaCutoff_;
    SFString? alphaMode_;
    SFNode? fillProperties_;
    SFNode? IS_;
    SFNode? lineProperties_;
    Material? material_;
    SFNode? metadata_;
    SFNode? pointProperties_;
    MFNode? shaders_;
    SFNode? texture_;
    SFNode? textureTransform_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Appearance({this.acousticProperties_, this.alphaCutoff_, this.alphaMode_, this.fillProperties_, this.IS_, this.lineProperties_, this.material_, this.metadata_, this.pointProperties_, this.shaders_, this.texture_, this.textureTransform_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SilhouetteEnhancementVolumeStyle extends X3DComposableVolumeRenderStyleNode {
    SFBool? enabled_;
    SFNode? IS_;
    SFNode? metadata_;
    SFFloat? silhouetteBoundaryOpacity_;
    SFFloat? silhouetteRetainedOpacity_;
    SFFloat? silhouetteSharpness_;
    SFNode? surfaceNormals_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    SilhouetteEnhancementVolumeStyle({this.enabled_, this.IS_, this.metadata_, this.silhouetteBoundaryOpacity_, this.silhouetteRetainedOpacity_, this.silhouetteSharpness_, this.surfaceNormals_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Contact extends X3DNode {
    MFString? appliedParameters_;
    SFNode? body1_;
    SFNode? body2_;
    SFFloat? bounce_;
    SFVec3f? contactNormal_;
    SFFloat? depth_;
    SFVec2f? frictionCoefficients_;
    SFVec3f? frictionDirection_;
    SFNode? geometry1_;
    SFNode? geometry2_;
    SFNode? IS_;
    SFNode? metadata_;
    SFFloat? minBounceSpeed_;
    SFVec3f? position_;
    SFVec2f? slipCoefficients_;
    SFFloat? softnessConstantForceMix_;
    SFFloat? softnessErrorCorrection_;
    SFVec2f? surfaceSpeed_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Contact({this.appliedParameters_, this.body1_, this.body2_, this.bounce_, this.contactNormal_, this.depth_, this.frictionCoefficients_, this.frictionDirection_, this.geometry1_, this.geometry2_, this.IS_, this.metadata_, this.minBounceSpeed_, this.position_, this.slipCoefficients_, this.softnessConstantForceMix_, this.softnessErrorCorrection_, this.surfaceSpeed_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SingleAxisHingeJoint extends X3DRigidJointNode {
    SFVec3f? anchorPoint_;
    SFFloat? angle_;
    SFFloat? angleRate_;
    SFVec3f? axis_;
    SFNode? body1_;
    SFVec3f? body1AnchorPoint_;
    SFNode? body2_;
    SFVec3f? body2AnchorPoint_;
    MFString? forceOutput_;
    SFNode? IS_;
    SFFloat? maxAngle_;
    SFNode? metadata_;
    SFFloat? minAngle_;
    SFFloat? stopBounce_;
    SFFloat? stopErrorCorrection_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    SingleAxisHingeJoint({this.anchorPoint_, this.angle_, this.angleRate_, this.axis_, this.body1_, this.body1AnchorPoint_, this.body2_, this.body2AnchorPoint_, this.forceOutput_, this.IS_, this.maxAngle_, this.metadata_, this.minAngle_, this.stopBounce_, this.stopErrorCorrection_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SFBool {
    bool? value_;
    SFBool(this.value_) {
    }
}

class X3DEnvironmentalSensorNode extends X3DSensorNode {
    SFBool? enabled_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
    SFVec3f? size_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DEnvironmentalSensorNode({this.enabled_, this.IS_, this.isActive_, this.metadata_, this.size_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class VisibilitySensor extends X3DEnvironmentalSensorNode {
    SFVec3f? center_;
    SFBool? enabled_;
    SFTime? enterTime_;
    SFTime? exitTime_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
    SFVec3f? size_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    VisibilitySensor({this.center_, this.enabled_, this.enterTime_, this.exitTime_, this.IS_, this.isActive_, this.metadata_, this.size_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class UniversalJoint extends X3DRigidJointNode {
    SFVec3f? anchorPoint_;
    SFVec3f? axis1_;
    SFVec3f? axis2_;
    SFNode? body1_;
    SFVec3f? body1AnchorPoint_;
    SFVec3f? body1Axis_;
    SFNode? body2_;
    SFVec3f? body2AnchorPoint_;
    SFFloat? body2Axis_;
    MFString? forceOutput_;
    SFNode? IS_;
    SFNode? metadata_;
    SFFloat? stop1Bounce_;
    SFFloat? stop1ErrorCorrection_;
    SFFloat? stop2Bounce_;
    SFFloat? stop2ErrorCorrection_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    UniversalJoint({this.anchorPoint_, this.axis1_, this.axis2_, this.body1_, this.body1AnchorPoint_, this.body1Axis_, this.body2_, this.body2AnchorPoint_, this.body2Axis_, this.forceOutput_, this.IS_, this.metadata_, this.stop1Bounce_, this.stop1ErrorCorrection_, this.stop2Bounce_, this.stop2ErrorCorrection_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class NurbsSurfaceInterpolator extends X3DChildNode {
    SFNode? controlPoint_;
    SFNode? IS_;
    SFNode? metadata_;
    SFVec3f? normal_;
    SFVec3f? position_;
        SFInt32? uDimension_;
    MFDouble? uKnot_;
    SFInt32? uOrder_;
    SFInt32? vDimension_;
    MFDouble? vKnot_;
    SFInt32? vOrder_;
    MFDouble? weight_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    NurbsSurfaceInterpolator({this.controlPoint_, this.IS_, this.metadata_, this.normal_, this.position_, this.uDimension_, this.uKnot_, this.uOrder_, this.vDimension_, this.vKnot_, this.vOrder_, this.weight_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class TriangleStripSet extends X3DComposedGeometryNode {
    MFNode? attrib_;
    SFBool? ccw_;
    SFNode? color_;
    SFBool? colorPerVertex_;
    SFNode? coord_;
    SFNode? fogCoord_;
    SFNode? IS_;
    SFNode? metadata_;
    SFNode? normal_;
    SFBool? normalPerVertex_;
    SFBool? solid_;
    MFInt32? stripCount_;
    SFNode? texCoord_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TriangleStripSet({this.attrib_, this.ccw_, this.color_, this.colorPerVertex_, this.coord_, this.fogCoord_, this.IS_, this.metadata_, this.normal_, this.normalPerVertex_, this.solid_, this.stripCount_, this.texCoord_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DTextureNode extends X3DAppearanceChildNode {
    SFString? description_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DTextureNode({this.description_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DEnvironmentTextureNode extends X3DTextureNode {
    SFString? description_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DEnvironmentTextureNode({this.description_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class GeneratedCubeMapTexture extends X3DEnvironmentTextureNode {
    SFString? description_;
    SFNode? IS_;
    SFNode? metadata_;
    SFInt32? size_;
    SFNode? textureProperties_;
    SFString? update_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    GeneratedCubeMapTexture({this.description_, this.IS_, this.metadata_, this.size_, this.textureProperties_, this.update_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Cone extends X3DGeometryNode {
    SFBool? bottom_;
    SFFloat? bottomRadius_;
    SFFloat? height_;
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? side_;
    SFBool? solid_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Cone({this.bottom_, this.bottomRadius_, this.height_, this.IS_, this.metadata_, this.side_, this.solid_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DCoordinateNode extends X3DGeometricPropertyNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DCoordinateNode({this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Group extends X3DGroupingNode {
        SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    List<SFNode>? children_;
    SFNode? IS_;
    SFNode? metadata_;
        SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Group({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.children_, this.IS_, this.metadata_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DDragSensorNode extends X3DPointingDeviceSensorNode {
    SFBool? autoOffset_;
    SFString? description_;
    SFBool? enabled_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isOver_;
    SFNode? metadata_;
    SFVec3f? trackPoint_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DDragSensorNode({this.autoOffset_, this.description_, this.enabled_, this.IS_, this.isActive_, this.isOver_, this.metadata_, this.trackPoint_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SphereSensor extends X3DDragSensorNode {
    SFBool? autoOffset_;
    SFString? description_;
    SFBool? enabled_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isOver_;
    SFNode? metadata_;
    SFRotation? offset_;
    SFRotation? rotation_;
    SFVec3f? trackPoint_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    SphereSensor({this.autoOffset_, this.description_, this.enabled_, this.IS_, this.isActive_, this.isOver_, this.metadata_, this.offset_, this.rotation_, this.trackPoint_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class NurbsOrientationInterpolator extends X3DChildNode {
    SFNode? controlPoint_;
    SFNode? IS_;
    MFDouble? knot_;
    SFNode? metadata_;
    SFInt32? order_;
        SFRotation? value_;
    MFDouble? weight_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    NurbsOrientationInterpolator({this.controlPoint_, this.IS_, this.knot_, this.metadata_, this.order_, this.value_, this.weight_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DParticlePhysicsModelNode extends X3DNode {
    SFBool? enabled_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DParticlePhysicsModelNode({this.enabled_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class WindPhysicsModel extends X3DParticlePhysicsModelNode {
    SFVec3f? direction_;
    SFBool? enabled_;
    SFFloat? gustiness_;
    SFNode? IS_;
    SFNode? metadata_;
    SFFloat? speed_;
    SFFloat? turbulence_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    WindPhysicsModel({this.direction_, this.enabled_, this.gustiness_, this.IS_, this.metadata_, this.speed_, this.turbulence_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DSoundChannelNode extends X3DSoundNode {
    SFInt32? channelCount_;
    SFString? channelCountMode_;
    SFString? channelInterpretation_;
    SFString? description_;
    SFBool? enabled_;
    SFFloat? gain_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DSoundChannelNode({this.channelCount_, this.channelCountMode_, this.channelInterpretation_, this.description_, this.enabled_, this.gain_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ChannelSelector extends X3DSoundChannelNode {
    SFInt32? channelCount_;
    SFString? channelCountMode_;
    SFString? channelInterpretation_;
    SFInt32? channelSelection_;
    List<SFNode>? children_;
    SFString? description_;
    SFBool? enabled_;
    SFFloat? gain_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ChannelSelector({this.channelCount_, this.channelCountMode_, this.channelInterpretation_, this.channelSelection_, this.children_, this.description_, this.enabled_, this.gain_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DSingleTextureNode extends X3DTextureNode {
    SFString? description_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DSingleTextureNode({this.description_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DTexture2DNode extends X3DSingleTextureNode {
    SFString? description_;
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? repeatS_;
    SFBool? repeatT_;
    SFNode? textureProperties_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DTexture2DNode({this.description_, this.IS_, this.metadata_, this.repeatS_, this.repeatT_, this.textureProperties_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MovieTexture extends X3DSoundSourceNode implements X3DTexture2DNode, X3DUrlObject {
    SFTime? autoRefresh_;
    SFTime? autoRefreshTimeLimit_;
    SFString? description_;
    SFTime? duration_;
    SFTime? elapsedTime_;
    SFBool? enabled_;
    SFFloat? gain_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isPaused_;
    SFBool? load_;
    SFBool? loop_;
    SFNode? metadata_;
    SFTime? pauseTime_;
    SFFloat? pitch_;
    SFBool? repeatS_;
    SFBool? repeatT_;
    SFTime? resumeTime_;
    SFFloat? speed_;
    SFTime? startTime_;
    SFTime? stopTime_;
    SFNode? textureProperties_;
    MFString? url_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    MovieTexture({this.autoRefresh_, this.autoRefreshTimeLimit_, this.description_, this.duration_, this.elapsedTime_, this.enabled_, this.gain_, this.IS_, this.isActive_, this.isPaused_, this.load_, this.loop_, this.metadata_, this.pauseTime_, this.pitch_, this.repeatS_, this.repeatT_, this.resumeTime_, this.speed_, this.startTime_, this.stopTime_, this.textureProperties_, this.url_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class BiquadFilter extends X3DSoundProcessingNode {
    SFInt32? channelCount_;
    SFString? channelCountMode_;
    SFString? channelInterpretation_;
    List<SFNode>? children_;
    SFString? description_;
    SFFloat? detune_;
    SFTime? elapsedTime_;
    SFBool? enabled_;
    SFFloat? frequency_;
    SFFloat? gain_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isPaused_;
    SFNode? metadata_;
    SFTime? pauseTime_;
    SFFloat? qualityFactor_;
    SFTime? resumeTime_;
    SFTime? startTime_;
    SFTime? stopTime_;
    SFTime? tailTime_;
    SFString? type_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    BiquadFilter({this.channelCount_, this.channelCountMode_, this.channelInterpretation_, this.children_, this.description_, this.detune_, this.elapsedTime_, this.enabled_, this.frequency_, this.gain_, this.IS_, this.isActive_, this.isPaused_, this.metadata_, this.pauseTime_, this.qualityFactor_, this.resumeTime_, this.startTime_, this.stopTime_, this.tailTime_, this.type_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class unit {
    SFString? category_;
    SFDouble? conversionFactor_;
    SFString? name_;
    unit({this.category_, this.conversionFactor_, this.name_}) {
    }
}

class PositionInterpolator2D extends X3DInterpolatorNode {
    SFNode? IS_;
    MFFloat? key_;
    MFVec2f? keyValue_;
    SFNode? metadata_;
        SFVec2f? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    PositionInterpolator2D({this.IS_, this.key_, this.keyValue_, this.metadata_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class GeoProximitySensor extends X3DEnvironmentalSensorNode {
    SFVec3d? center_;
    SFVec3f? centerOfRotation_;
    SFBool? enabled_;
    SFTime? enterTime_;
    SFTime? exitTime_;
    SFVec3d? geoCenter_;
    SFVec3d? geoCoord_;
    SFNode? geoOrigin_;
    MFString? geoSystem_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
    SFRotation? orientation_;
    SFVec3f? position_;
    SFVec3f? size_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    GeoProximitySensor({this.center_, this.centerOfRotation_, this.enabled_, this.enterTime_, this.exitTime_, this.geoCenter_, this.geoCoord_, this.geoOrigin_, this.geoSystem_, this.IS_, this.isActive_, this.metadata_, this.orientation_, this.position_, this.size_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class TextureProperties extends X3DNode {
    SFFloat? anisotropicDegree_;
    SFColorRGBA? borderColor_;
    SFInt32? borderWidth_;
    SFString? boundaryModeR_;
    SFString? boundaryModeS_;
    SFString? boundaryModeT_;
    SFBool? generateMipMaps_;
    SFNode? IS_;
    SFString? magnificationFilter_;
    SFNode? metadata_;
    SFString? minificationFilter_;
    SFString? textureCompression_;
    SFFloat? texturePriority_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TextureProperties({this.anisotropicDegree_, this.borderColor_, this.borderWidth_, this.boundaryModeR_, this.boundaryModeS_, this.boundaryModeT_, this.generateMipMaps_, this.IS_, this.magnificationFilter_, this.metadata_, this.minificationFilter_, this.textureCompression_, this.texturePriority_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Polypoint2D extends X3DGeometryNode {
    SFNode? IS_;
    SFNode? metadata_;
    MFVec2f? point_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Polypoint2D({this.IS_, this.metadata_, this.point_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class NurbsPositionInterpolator extends X3DChildNode {
    SFNode? controlPoint_;
    SFNode? IS_;
    MFDouble? knot_;
    SFNode? metadata_;
    SFInt32? order_;
        SFVec3f? value_;
    MFDouble? weight_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    NurbsPositionInterpolator({this.controlPoint_, this.IS_, this.knot_, this.metadata_, this.order_, this.value_, this.weight_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DDamperNode extends X3DFollowerNode {
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
    SFInt32? order_;
    SFTime? tau_;
    SFFloat? tolerance_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DDamperNode({this.IS_, this.isActive_, this.metadata_, this.order_, this.tau_, this.tolerance_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class PositionDamper2D extends X3DDamperNode {
    SFVec2f? initialDestination_;
    SFVec2f? initialValue_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
    SFInt32? order_;
            SFTime? tau_;
    SFFloat? tolerance_;
    SFVec2f? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    PositionDamper2D({this.initialDestination_, this.initialValue_, this.IS_, this.isActive_, this.metadata_, this.order_, this.tau_, this.tolerance_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Coordinate extends X3DCoordinateNode {
    SFNode? IS_;
    SFNode? metadata_;
    MFVec3f? point_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Coordinate({this.IS_, this.metadata_, this.point_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SFMatrix4f {
    List<SFDouble>? value_;
    SFMatrix4f(this.value_) {
    }
}

class MFVec3f  {
    List<SFVec3f>? value_;
    MFVec3f(this.value_) {
    }
}

class SFMatrix4d {
    List<SFDouble>? value_;
    SFMatrix4d(this.value_) {
    }
}

class MFVec3d  {
    List<SFVec3d>? value_;
    MFVec3d(this.value_) {
    }
}

class BallJoint extends X3DRigidJointNode {
    SFVec3f? anchorPoint_;
    SFNode? body1_;
    SFVec3f? body1AnchorPoint_;
    SFNode? body2_;
    SFVec3f? body2AnchorPoint_;
    MFString? forceOutput_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    BallJoint({this.anchorPoint_, this.body1_, this.body1AnchorPoint_, this.body2_, this.body2AnchorPoint_, this.forceOutput_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SFMatrix3f {
    List<SFDouble>? value_;
    SFMatrix3f(this.value_) {
    }
}

class SFMatrix3d {
    List<SFDouble>? value_;
    SFMatrix3d(this.value_) {
    }
}

class X3DProgrammableShaderObject {
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DProgrammableShaderObject({this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DShaderNode extends X3DAppearanceChildNode {
    SFBool? activate_;
    SFNode? IS_;
    SFBool? isSelected_;
    SFBool? isValid_;
    SFString? language_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DShaderNode({this.activate_, this.IS_, this.isSelected_, this.isValid_, this.language_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ComposedShader extends X3DShaderNode implements X3DProgrammableShaderObject {
    SFBool? activate_;
    MFNode? field_;
    SFNode? IS_;
    SFBool? isSelected_;
    SFBool? isValid_;
    SFString? language_;
    SFNode? metadata_;
    MFNode? parts_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ComposedShader({this.activate_, this.field_, this.IS_, this.isSelected_, this.isValid_, this.language_, this.metadata_, this.parts_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SFImage {
    List<SFDouble>? value_;
    SFImage(this.value_) {
    }
}

class X3DNBodyCollidableNode extends X3DChildNode implements X3DBoundedObject {
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFBool? enabled_;
    SFNode? IS_;
    SFNode? metadata_;
    SFRotation? rotation_;
    SFVec3f? translation_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DNBodyCollidableNode({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.enabled_, this.IS_, this.metadata_, this.rotation_, this.translation_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class CollidableShape extends X3DNBodyCollidableNode {
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFBool? enabled_;
    SFNode? IS_;
    SFNode? metadata_;
    SFRotation? rotation_;
    SFNode? shape_;
    SFVec3f? translation_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    CollidableShape({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.enabled_, this.IS_, this.metadata_, this.rotation_, this.shape_, this.translation_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ShadedVolumeStyle extends X3DComposableVolumeRenderStyleNode {
    SFBool? enabled_;
    SFNode? IS_;
    SFBool? lighting_;
    Material? material_;
    SFNode? metadata_;
    SFString? phaseFunction_;
    SFBool? shadows_;
    SFNode? surfaceNormals_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ShadedVolumeStyle({this.enabled_, this.IS_, this.lighting_, this.material_, this.metadata_, this.phaseFunction_, this.shadows_, this.surfaceNormals_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DVolumeDataNode extends X3DChildNode implements X3DBoundedObject {
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFVec3f? dimensions_;
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DVolumeDataNode({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.dimensions_, this.IS_, this.metadata_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SegmentedVolumeData extends X3DVolumeDataNode {
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFVec3f? dimensions_;
    SFNode? IS_;
    SFNode? metadata_;
    MFNode? renderStyle_;
    MFBool? segmentEnabled_;
    SFNode? segmentIdentifiers_;
    SFBool? visible_;
    SFNode? voxels_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    SegmentedVolumeData({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.dimensions_, this.IS_, this.metadata_, this.renderStyle_, this.segmentEnabled_, this.segmentIdentifiers_, this.visible_, this.voxels_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class PlaneSensor extends X3DDragSensorNode {
    SFBool? autoOffset_;
    SFRotation? axisRotation_;
    SFString? description_;
    SFBool? enabled_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isOver_;
    SFVec2f? maxPosition_;
    SFNode? metadata_;
    SFVec2f? minPosition_;
    SFVec3f? offset_;
    SFVec3f? trackPoint_;
    SFVec3f? translation_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    PlaneSensor({this.autoOffset_, this.axisRotation_, this.description_, this.enabled_, this.IS_, this.isActive_, this.isOver_, this.maxPosition_, this.metadata_, this.minPosition_, this.offset_, this.trackPoint_, this.translation_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DTriggerNode extends X3DChildNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DTriggerNode({this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ColorDamper extends X3DDamperNode {
    SFColor? initialDestination_;
    SFColor? initialValue_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
    SFInt32? order_;
            SFTime? tau_;
    SFFloat? tolerance_;
    SFColor? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ColorDamper({this.initialDestination_, this.initialValue_, this.IS_, this.isActive_, this.metadata_, this.order_, this.tau_, this.tolerance_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class IS {
    MFNode? connect_;
    IS({this.connect_}) {
    }
}

class X3DShapeNode extends X3DChildNode implements X3DBoundedObject {
    Appearance? appearance_;
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFBool? castShadow_;
    X3DGeometryNode? geometry_;
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DShapeNode({this.appearance_, this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.castShadow_, this.geometry_, this.IS_, this.metadata_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Shape extends X3DShapeNode {
    Appearance? appearance_;
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFBool? castShadow_;
    X3DGeometryNode? geometry_;
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Shape({this.appearance_, this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.castShadow_, this.geometry_, this.IS_, this.metadata_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class PositionInterpolator extends X3DInterpolatorNode {
    SFNode? IS_;
    MFFloat? key_;
    MFVec3f? keyValue_;
    SFNode? metadata_;
        SFVec3f? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    PositionInterpolator({this.IS_, this.key_, this.keyValue_, this.metadata_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Gain extends X3DSoundProcessingNode {
    SFInt32? channelCount_;
    SFString? channelCountMode_;
    SFString? channelInterpretation_;
    List<SFNode>? children_;
    SFString? description_;
    SFTime? elapsedTime_;
    SFBool? enabled_;
    SFFloat? gain_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isPaused_;
    SFNode? metadata_;
    SFTime? pauseTime_;
    SFTime? resumeTime_;
    SFTime? startTime_;
    SFTime? stopTime_;
    SFTime? tailTime_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Gain({this.channelCount_, this.channelCountMode_, this.channelInterpretation_, this.children_, this.description_, this.elapsedTime_, this.enabled_, this.gain_, this.IS_, this.isActive_, this.isPaused_, this.metadata_, this.pauseTime_, this.resumeTime_, this.startTime_, this.stopTime_, this.tailTime_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class LayoutGroup extends X3DNode implements X3DGroupingNode {
        SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    List<SFNode>? children_;
    SFNode? IS_;
    SFNode? layout_;
    SFNode? metadata_;
        SFNode? viewport_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    LayoutGroup({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.children_, this.IS_, this.layout_, this.metadata_, this.viewport_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class BooleanToggle extends X3DChildNode {
    SFNode? IS_;
    SFNode? metadata_;
        SFBool? toggle_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    BooleanToggle({this.IS_, this.metadata_, this.toggle_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MFString  {
    List<SFString>? value_;
    MFString(this.value_) {
    }
}

class TextureCoordinate4D extends X3DSingleTextureCoordinateNode {
    SFNode? IS_;
    SFString? mapping_;
    SFNode? metadata_;
    MFVec4f? point_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TextureCoordinate4D({this.IS_, this.mapping_, this.metadata_, this.point_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DNormalNode extends X3DGeometricPropertyNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DNormalNode({this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DNurbsControlCurveNode extends X3DNode {
    MFVec2d? controlPoint_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DNurbsControlCurveNode({this.controlPoint_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class NurbsCurve2D extends X3DNurbsControlCurveNode {
    SFBool? closed_;
    MFVec2d? controlPoint_;
    SFNode? IS_;
    MFDouble? knot_;
    SFNode? metadata_;
    SFInt32? order_;
    SFInt32? tessellation_;
    MFDouble? weight_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    NurbsCurve2D({this.closed_, this.controlPoint_, this.IS_, this.knot_, this.metadata_, this.order_, this.tessellation_, this.weight_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class PositionDamper extends X3DDamperNode {
    SFVec3f? initialDestination_;
    SFVec3f? initialValue_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
    SFInt32? order_;
            SFTime? tau_;
    SFFloat? tolerance_;
    SFVec3f? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    PositionDamper({this.initialDestination_, this.initialValue_, this.IS_, this.isActive_, this.metadata_, this.order_, this.tau_, this.tolerance_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class IndexedTriangleSet extends X3DComposedGeometryNode {
    MFNode? attrib_;
    SFBool? ccw_;
    SFNode? color_;
    SFBool? colorPerVertex_;
    SFNode? coord_;
    SFNode? fogCoord_;
    MFInt32? index_;
    SFNode? IS_;
    SFNode? metadata_;
    SFNode? normal_;
    SFBool? normalPerVertex_;
        SFBool? solid_;
    SFNode? texCoord_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    IndexedTriangleSet({this.attrib_, this.ccw_, this.color_, this.colorPerVertex_, this.coord_, this.fogCoord_, this.index_, this.IS_, this.metadata_, this.normal_, this.normalPerVertex_, this.solid_, this.texCoord_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Sphere extends X3DGeometryNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFFloat? radius_;
    SFBool? solid_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Sphere({this.IS_, this.metadata_, this.radius_, this.solid_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class StreamAudioSource extends X3DSoundSourceNode {
    SFString? channelCountMode_;
    SFString? channelInterpretation_;
    List<SFNode>? children_;
    SFString? description_;
    SFTime? elapsedTime_;
    SFBool? enabled_;
    SFFloat? gain_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isPaused_;
    SFNode? metadata_;
    SFTime? pauseTime_;
    SFTime? resumeTime_;
    SFTime? startTime_;
    SFTime? stopTime_;
    SFString? streamIdentifier_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    StreamAudioSource({this.channelCountMode_, this.channelInterpretation_, this.children_, this.description_, this.elapsedTime_, this.enabled_, this.gain_, this.IS_, this.isActive_, this.isPaused_, this.metadata_, this.pauseTime_, this.resumeTime_, this.startTime_, this.stopTime_, this.streamIdentifier_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class OrthoViewpoint extends X3DViewpointNode {
    SFTime? bindTime_;
    SFVec3f? centerOfRotation_;
    SFString? description_;
    SFFloat? farDistance_;
    MFFloat? fieldOfView_;
    SFNode? IS_;
    SFBool? isBound_;
    SFBool? jump_;
    SFNode? metadata_;
    SFNode? navigationInfo_;
    SFFloat? nearDistance_;
    SFRotation? orientation_;
    SFVec3f? position_;
    SFBool? retainUserOffsets_;
        SFBool? viewAll_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    OrthoViewpoint({this.bindTime_, this.centerOfRotation_, this.description_, this.farDistance_, this.fieldOfView_, this.IS_, this.isBound_, this.jump_, this.metadata_, this.navigationInfo_, this.nearDistance_, this.orientation_, this.position_, this.retainUserOffsets_, this.viewAll_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DSingleTextureTransformNode extends X3DTextureTransformNode {
    SFNode? IS_;
    SFString? mapping_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DSingleTextureTransformNode({this.IS_, this.mapping_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SFColorRGBA {
    List<SFDouble>? value_;
    SFColorRGBA(this.value_) {
    }
}

class GeoCoordinate extends X3DCoordinateNode {
    SFNode? geoOrigin_;
    MFString? geoSystem_;
    SFNode? IS_;
    SFNode? metadata_;
    MFVec3d? point_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    GeoCoordinate({this.geoOrigin_, this.geoSystem_, this.IS_, this.metadata_, this.point_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class PointSet extends X3DGeometryNode {
    MFNode? attrib_;
    SFNode? color_;
    SFNode? coord_;
    SFNode? fogCoord_;
    SFNode? IS_;
    SFNode? metadata_;
    SFNode? normal_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    PointSet({this.attrib_, this.color_, this.coord_, this.fogCoord_, this.IS_, this.metadata_, this.normal_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class HAnimJoint extends X3DChildNode implements X3DBoundedObject {
        SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFVec3f? center_;
    List<SFNode>? children_;
    SFString? description_;
    MFNode? displacers_;
    SFNode? IS_;
    SFRotation? limitOrientation_;
    SFVec3f? llimit_;
    SFNode? metadata_;
    SFString? name_;
        SFRotation? rotation_;
    SFVec3f? scale_;
    SFRotation? scaleOrientation_;
    MFInt32? skinCoordIndex_;
    MFFloat? skinCoordWeight_;
    SFVec3f? stiffness_;
    SFVec3f? translation_;
    SFVec3f? ulimit_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    HAnimJoint({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.center_, this.children_, this.description_, this.displacers_, this.IS_, this.limitOrientation_, this.llimit_, this.metadata_, this.name_, this.rotation_, this.scale_, this.scaleOrientation_, this.skinCoordIndex_, this.skinCoordWeight_, this.stiffness_, this.translation_, this.ulimit_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class IntegerTrigger extends X3DTriggerNode {
    SFInt32? integerKey_;
    SFNode? IS_;
    SFNode? metadata_;
        SFInt32? triggerValue_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    IntegerTrigger({this.integerKey_, this.IS_, this.metadata_, this.triggerValue_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SFTime {
    List<SFDouble>? value_;
    SFTime(this.value_) {
    }
}

class NurbsSweptSurface extends X3DParametricGeometryNode {
    SFBool? ccw_;
    SFNode? crossSectionCurve_;
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? solid_;
    SFNode? trajectoryCurve_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    NurbsSweptSurface({this.ccw_, this.crossSectionCurve_, this.IS_, this.metadata_, this.solid_, this.trajectoryCurve_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MicrophoneSource extends X3DSoundSourceNode {
    List<SFNode>? children_;
    SFString? description_;
    SFTime? elapsedTime_;
    SFBool? enabled_;
    SFFloat? gain_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isPaused_;
    SFString? mediaDeviceID_;
    SFNode? metadata_;
    SFTime? pauseTime_;
    SFTime? resumeTime_;
    SFTime? startTime_;
    SFTime? stopTime_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    MicrophoneSource({this.children_, this.description_, this.elapsedTime_, this.enabled_, this.gain_, this.IS_, this.isActive_, this.isPaused_, this.mediaDeviceID_, this.metadata_, this.pauseTime_, this.resumeTime_, this.startTime_, this.stopTime_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Sound extends X3DSoundNode {
    SFString? description_;
    SFVec3f? direction_;
    SFBool? enabled_;
    SFFloat? intensity_;
    SFNode? IS_;
    SFVec3f? location_;
    SFFloat? maxBack_;
    SFFloat? maxFront_;
    SFNode? metadata_;
    SFFloat? minBack_;
    SFFloat? minFront_;
    SFFloat? priority_;
    SFNode? source_;
    SFBool? spatialize_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Sound({this.description_, this.direction_, this.enabled_, this.intensity_, this.IS_, this.location_, this.maxBack_, this.maxFront_, this.metadata_, this.minBack_, this.minFront_, this.priority_, this.source_, this.spatialize_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DBackgroundNode extends X3DBindableNode {
    SFTime? bindTime_;
    MFFloat? groundAngle_;
    MFColor? groundColor_;
    SFNode? IS_;
    SFBool? isBound_;
    SFNode? metadata_;
        MFFloat? skyAngle_;
    MFColor? skyColor_;
    SFFloat? transparency_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DBackgroundNode({this.bindTime_, this.groundAngle_, this.groundColor_, this.IS_, this.isBound_, this.metadata_, this.skyAngle_, this.skyColor_, this.transparency_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class EaseInEaseOut extends X3DChildNode {
    MFVec2f? easeInEaseOut_;
    SFNode? IS_;
    MFFloat? key_;
    SFNode? metadata_;
    SFFloat? modifiedFraction_;
        SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    EaseInEaseOut({this.easeInEaseOut_, this.IS_, this.key_, this.metadata_, this.modifiedFraction_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DVertexAttributeNode extends X3DGeometricPropertyNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? name_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DVertexAttributeNode({this.IS_, this.metadata_, this.name_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DMetadataObject {
    SFString? name_;
    SFString? reference_;
    X3DMetadataObject({this.name_, this.reference_}) {
    }
}

class GeoOrigin extends X3DNode {
    SFVec3d? geoCoords_;
    MFString? geoSystem_;
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? rotateYUp_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    GeoOrigin({this.geoCoords_, this.geoSystem_, this.IS_, this.metadata_, this.rotateYUp_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Inline extends X3DChildNode implements X3DBoundedObject, X3DUrlObject {
    SFTime? autoRefresh_;
    SFTime? autoRefreshTimeLimit_;
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFString? description_;
    SFBool? global_;
    SFNode? IS_;
    SFBool? load_;
    SFNode? metadata_;
    MFString? url_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Inline({this.autoRefresh_, this.autoRefreshTimeLimit_, this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.description_, this.global_, this.IS_, this.load_, this.metadata_, this.url_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ProximitySensor extends X3DEnvironmentalSensorNode {
    SFVec3f? center_;
    SFVec3f? centerOfRotation_;
    SFBool? enabled_;
    SFTime? enterTime_;
    SFTime? exitTime_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
    SFRotation? orientation_;
    SFVec3f? position_;
    SFVec3f? size_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ProximitySensor({this.center_, this.centerOfRotation_, this.enabled_, this.enterTime_, this.exitTime_, this.IS_, this.isActive_, this.metadata_, this.orientation_, this.position_, this.size_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SFVec4d {
    List<SFDouble>? value_;
    SFVec4d(this.value_) {
    }
}

class SFVec4f {
    List<SFDouble>? value_;
    SFVec4f(this.value_) {
    }
}

class FloatVertexAttribute extends X3DVertexAttributeNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? name_;
    SFInt32? numComponents_;
    MFFloat? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    FloatVertexAttribute({this.IS_, this.metadata_, this.name_, this.numComponents_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ContourPolyline2D extends X3DNurbsControlCurveNode {
    MFVec2d? controlPoint_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ContourPolyline2D({this.controlPoint_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class GeoViewpoint extends X3DViewpointNode {
    SFTime? bindTime_;
    SFVec3d? centerOfRotation_;
    SFString? description_;
    SFFloat? farDistance_;
    SFFloat? fieldOfView_;
    SFNode? geoOrigin_;
    MFString? geoSystem_;
    SFNode? IS_;
    SFBool? isBound_;
    SFBool? jump_;
    SFNode? metadata_;
    SFNode? navigationInfo_;
    SFFloat? nearDistance_;
    SFRotation? orientation_;
    SFVec3d? position_;
    SFBool? retainUserOffsets_;
        SFFloat? speedFactor_;
    SFBool? viewAll_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    GeoViewpoint({this.bindTime_, this.centerOfRotation_, this.description_, this.farDistance_, this.fieldOfView_, this.geoOrigin_, this.geoSystem_, this.IS_, this.isBound_, this.jump_, this.metadata_, this.navigationInfo_, this.nearDistance_, this.orientation_, this.position_, this.retainUserOffsets_, this.speedFactor_, this.viewAll_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class CoordinateDamper extends X3DDamperNode {
    MFVec3f? initialDestination_;
    MFVec3f? initialValue_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
    SFInt32? order_;
            SFTime? tau_;
    SFFloat? tolerance_;
    MFVec3f? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    CoordinateDamper({this.initialDestination_, this.initialValue_, this.IS_, this.isActive_, this.metadata_, this.order_, this.tau_, this.tolerance_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ChannelMerger extends X3DSoundChannelNode {
    SFInt32? channelCount_;
    SFString? channelCountMode_;
    SFString? channelInterpretation_;
    List<SFNode>? children_;
    SFString? description_;
    SFBool? enabled_;
    SFFloat? gain_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ChannelMerger({this.channelCount_, this.channelCountMode_, this.channelInterpretation_, this.children_, this.description_, this.enabled_, this.gain_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SpotLight extends X3DLightNode {
    SFFloat? ambientIntensity_;
    SFVec3f? attenuation_;
    SFFloat? beamWidth_;
    SFColor? color_;
    SFFloat? cutOffAngle_;
    SFVec3f? direction_;
    SFBool? global_;
    SFFloat? intensity_;
    SFNode? IS_;
    SFVec3f? location_;
    SFNode? metadata_;
    SFBool? on_;
    SFFloat? radius_;
    SFFloat? shadowIntensity_;
    SFBool? shadows_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    SpotLight({this.ambientIntensity_, this.attenuation_, this.beamWidth_, this.color_, this.cutOffAngle_, this.direction_, this.global_, this.intensity_, this.IS_, this.location_, this.metadata_, this.on_, this.radius_, this.shadowIntensity_, this.shadows_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class OrientationChaser extends X3DChaserNode {
    SFTime? duration_;
    SFRotation? initialDestination_;
    SFRotation? initialValue_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
            SFRotation? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    OrientationChaser({this.duration_, this.initialDestination_, this.initialValue_, this.IS_, this.isActive_, this.metadata_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class NurbsSwungSurface extends X3DParametricGeometryNode {
    SFBool? ccw_;
    SFNode? IS_;
    SFNode? metadata_;
    SFNode? profileCurve_;
    SFBool? solid_;
    SFNode? trajectoryCurve_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    NurbsSwungSurface({this.ccw_, this.IS_, this.metadata_, this.profileCurve_, this.solid_, this.trajectoryCurve_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MultiTexture extends X3DTextureNode {
    SFFloat? alpha_;
    SFColor? color_;
    SFString? description_;
    MFString? function_;
    SFNode? IS_;
    SFNode? metadata_;
    MFString? mode_;
    MFString? source_;
    MFNode? texture_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    MultiTexture({this.alpha_, this.color_, this.description_, this.function_, this.IS_, this.metadata_, this.mode_, this.source_, this.texture_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class RigidBodyCollection extends X3DChildNode {
    SFBool? autoDisable_;
    SFBool? bboxDisplay_;
    MFNode? bodies_;
    SFNode? collider_;
    SFFloat? constantForceMix_;
    SFFloat? contactSurfaceThickness_;
    SFFloat? disableAngularSpeed_;
    SFFloat? disableLinearSpeed_;
    SFTime? disableTime_;
    SFBool? enabled_;
    SFFloat? errorCorrection_;
    SFVec3f? gravity_;
    SFNode? IS_;
    SFInt32? iterations_;
    MFNode? joints_;
    SFFloat? maxCorrectionSpeed_;
    SFNode? metadata_;
    SFBool? preferAccuracy_;
        SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    RigidBodyCollection({this.autoDisable_, this.bboxDisplay_, this.bodies_, this.collider_, this.constantForceMix_, this.contactSurfaceThickness_, this.disableAngularSpeed_, this.disableLinearSpeed_, this.disableTime_, this.enabled_, this.errorCorrection_, this.gravity_, this.IS_, this.iterations_, this.joints_, this.maxCorrectionSpeed_, this.metadata_, this.preferAccuracy_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class meta {
    SFString? content_;
    SFString? dir_;
    SFString? http_equiv_;
    SFString? lang_;
    SFString? name_;
    SFString? scheme_;
    meta({this.content_, this.dir_, this.http_equiv_, this.lang_, this.name_, this.scheme_}) {
    }
}

class X3DTexture3DNode extends X3DTextureNode {
    SFString? description_;
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? repeatR_;
    SFBool? repeatS_;
    SFBool? repeatT_;
    SFNode? textureProperties_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DTexture3DNode({this.description_, this.IS_, this.metadata_, this.repeatR_, this.repeatS_, this.repeatT_, this.textureProperties_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ComposedTexture3D extends X3DTexture3DNode {
    SFString? description_;
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? repeatR_;
    SFBool? repeatS_;
    SFBool? repeatT_;
    MFNode? texture_;
    SFNode? textureProperties_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ComposedTexture3D({this.description_, this.IS_, this.metadata_, this.repeatR_, this.repeatS_, this.repeatT_, this.texture_, this.textureProperties_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Matrix4VertexAttribute extends X3DVertexAttributeNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? name_;
    MFMatrix4f? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Matrix4VertexAttribute({this.IS_, this.metadata_, this.name_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class TexCoordChaser2D extends X3DChaserNode {
    SFTime? duration_;
    MFVec2f? initialDestination_;
    MFVec2f? initialValue_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
            MFVec2f? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TexCoordChaser2D({this.duration_, this.initialDestination_, this.initialValue_, this.IS_, this.isActive_, this.metadata_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DMaterialNode extends X3DAppearanceChildNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DMaterialNode({this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class TwoSidedMaterial extends X3DMaterialNode {
    SFFloat? ambientIntensity_;
    SFFloat? backAmbientIntensity_;
    SFColor? backDiffuseColor_;
    SFColor? backEmissiveColor_;
    SFFloat? backShininess_;
    SFColor? backSpecularColor_;
    SFFloat? backTransparency_;
    SFColor? diffuseColor_;
    SFColor? emissiveColor_;
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? separateBackColor_;
    SFFloat? shininess_;
    SFColor? specularColor_;
    SFFloat? transparency_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TwoSidedMaterial({this.ambientIntensity_, this.backAmbientIntensity_, this.backDiffuseColor_, this.backEmissiveColor_, this.backShininess_, this.backSpecularColor_, this.backTransparency_, this.diffuseColor_, this.emissiveColor_, this.IS_, this.metadata_, this.separateBackColor_, this.shininess_, this.specularColor_, this.transparency_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DOneSidedMaterialNode extends X3DMaterialNode {
    SFColor? emissiveColor_;
    SFString? emissiveTextureMapping_;
    SFNode? IS_;
    SFNode? metadata_;
    SFFloat? normalScale_;
    SFString? normalTextureMapping_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DOneSidedMaterialNode({this.emissiveColor_, this.emissiveTextureMapping_, this.IS_, this.metadata_, this.normalScale_, this.normalTextureMapping_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Material extends X3DOneSidedMaterialNode {
    SFFloat? ambientIntensity_;
    SFNode? ambientTexture_;
    SFString? ambientTextureMapping_;
    SFColor? diffuseColor_;
    SFNode? diffuseTexture_;
    SFString? diffuseTextureMapping_;
    SFColor? emissiveColor_;
    SFNode? emissiveTexture_;
    SFString? emissiveTextureMapping_;
    SFNode? IS_;
    SFNode? metadata_;
    SFFloat? normalScale_;
    SFNode? normalTexture_;
    SFString? normalTextureMapping_;
    SFFloat? occlusionStrength_;
    SFNode? occlusionTexture_;
    SFString? occlusionTextureMapping_;
    SFFloat? shininess_;
    SFNode? shininessTexture_;
    SFString? shininessTextureMapping_;
    SFColor? specularColor_;
    SFNode? specularTexture_;
    SFString? specularTextureMapping_;
    SFFloat? transparency_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Material({this.ambientIntensity_, this.ambientTexture_, this.ambientTextureMapping_, this.diffuseColor_, this.diffuseTexture_, this.diffuseTextureMapping_, this.emissiveColor_, this.emissiveTexture_, this.emissiveTextureMapping_, this.IS_, this.metadata_, this.normalScale_, this.normalTexture_, this.normalTextureMapping_, this.occlusionStrength_, this.occlusionTexture_, this.occlusionTextureMapping_, this.shininess_, this.shininessTexture_, this.shininessTextureMapping_, this.specularColor_, this.specularTexture_, this.specularTextureMapping_, this.transparency_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SplinePositionInterpolator extends X3DInterpolatorNode {
    SFBool? closed_;
    SFNode? IS_;
    MFFloat? key_;
    MFVec3f? keyValue_;
    MFVec3f? keyVelocity_;
    SFNode? metadata_;
    SFBool? normalizeVelocity_;
        SFVec3f? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    SplinePositionInterpolator({this.closed_, this.IS_, this.key_, this.keyValue_, this.keyVelocity_, this.metadata_, this.normalizeVelocity_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ColorRGBA extends X3DColorNode {
    MFColorRGBA? color_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ColorRGBA({this.color_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MFMatrix3d  {
    List<SFMatrix3d>? value_;
    MFMatrix3d(this.value_) {
    }
}

class MFMatrix3f  {
    List<SFMatrix3f>? value_;
    MFMatrix3f(this.value_) {
    }
}

class TimeSensor extends X3DTimeDependentNode implements X3DSensorNode {
    SFTime? cycleInterval_;
    SFTime? cycleTime_;
    SFString? description_;
    SFTime? elapsedTime_;
    SFBool? enabled_;
    SFFloat? fraction_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isPaused_;
    SFBool? loop_;
    SFNode? metadata_;
    SFTime? pauseTime_;
    SFTime? resumeTime_;
    SFTime? startTime_;
    SFTime? stopTime_;
    SFTime? time_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TimeSensor({this.cycleInterval_, this.cycleTime_, this.description_, this.elapsedTime_, this.enabled_, this.fraction_, this.IS_, this.isActive_, this.isPaused_, this.loop_, this.metadata_, this.pauseTime_, this.resumeTime_, this.startTime_, this.stopTime_, this.time_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class HAnimHumanoid extends X3DChildNode implements X3DBoundedObject {
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFVec3f? center_;
    SFString? description_;
    MFString? info_;
    SFNode? IS_;
    MFVec3f? jointBindingPositions_;
    MFRotation? jointBindingRotations_;
    MFVec3f? jointBindingScales_;
    MFNode? joints_;
    SFInt32? loa_;
    SFNode? metadata_;
    MFNode? motions_;
    SFString? name_;
    SFRotation? rotation_;
    SFVec3f? scale_;
    SFRotation? scaleOrientation_;
    MFNode? segments_;
    MFNode? sites_;
    SFString? skeletalConfiguration_;
    MFNode? skeleton_;
    MFNode? skin_;
    SFNode? skinBindingCoord_;
    SFNode? skinBindingNormal_;
    SFNode? skinCoord_;
    SFNode? skinNormal_;
    SFVec3f? translation_;
    SFString? version_;
    MFNode? viewpoints_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    HAnimHumanoid({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.center_, this.description_, this.info_, this.IS_, this.jointBindingPositions_, this.jointBindingRotations_, this.jointBindingScales_, this.joints_, this.loa_, this.metadata_, this.motions_, this.name_, this.rotation_, this.scale_, this.scaleOrientation_, this.segments_, this.sites_, this.skeletalConfiguration_, this.skeleton_, this.skin_, this.skinBindingCoord_, this.skinBindingNormal_, this.skinCoord_, this.skinNormal_, this.translation_, this.version_, this.viewpoints_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class TextureTransformMatrix3D extends X3DTextureTransformNode {
    SFNode? IS_;
    SFMatrix4f? matrix_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TextureTransformMatrix3D({this.IS_, this.matrix_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class NurbsPatchSurface extends X3DNurbsSurfaceGeometryNode {
    SFNode? controlPoint_;
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? solid_;
    SFNode? texCoord_;
    SFBool? uClosed_;
    SFInt32? uDimension_;
    MFDouble? uKnot_;
    SFInt32? uOrder_;
    SFInt32? uTessellation_;
    SFBool? vClosed_;
    SFInt32? vDimension_;
    MFDouble? vKnot_;
    SFInt32? vOrder_;
    SFInt32? vTessellation_;
    MFDouble? weight_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    NurbsPatchSurface({this.controlPoint_, this.IS_, this.metadata_, this.solid_, this.texCoord_, this.uClosed_, this.uDimension_, this.uKnot_, this.uOrder_, this.uTessellation_, this.vClosed_, this.vDimension_, this.vKnot_, this.vOrder_, this.vTessellation_, this.weight_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class VolumePickSensor extends X3DPickSensorNode {
    SFBool? enabled_;
    SFString? intersectionType_;
    SFNode? IS_;
    SFBool? isActive_;
    SFString? matchCriterion_;
    SFNode? metadata_;
    MFString? objectType_;
    MFNode? pickedGeometry_;
    SFNode? pickingGeometry_;
    MFNode? pickTarget_;
    SFString? sortOrder_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    VolumePickSensor({this.enabled_, this.intersectionType_, this.IS_, this.isActive_, this.matchCriterion_, this.metadata_, this.objectType_, this.pickedGeometry_, this.pickingGeometry_, this.pickTarget_, this.sortOrder_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Arc2D extends X3DGeometryNode {
    SFFloat? endAngle_;
    SFNode? IS_;
    SFNode? metadata_;
    SFFloat? radius_;
    SFFloat? startAngle_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Arc2D({this.endAngle_, this.IS_, this.metadata_, this.radius_, this.startAngle_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ListenerPointSource extends X3DSoundSourceNode {
    List<SFNode>? children_;
    SFString? description_;
    SFTime? elapsedTime_;
    SFBool? enabled_;
    SFBool? enableDoppler_;
    SFFloat? gain_;
    SFFloat? interauralDistance_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isPaused_;
    SFNode? metadata_;
    SFRotation? orientation_;
    SFTime? pauseTime_;
    SFVec3f? position_;
    SFTime? resumeTime_;
    SFTime? startTime_;
    SFTime? stopTime_;
    SFBool? trackCurrentView_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ListenerPointSource({this.children_, this.description_, this.elapsedTime_, this.enabled_, this.enableDoppler_, this.gain_, this.interauralDistance_, this.IS_, this.isActive_, this.isPaused_, this.metadata_, this.orientation_, this.pauseTime_, this.position_, this.resumeTime_, this.startTime_, this.stopTime_, this.trackCurrentView_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MFBool  {
    List<SFBool>? value_;
    MFBool(this.value_) {
    }
}

class MFVec2d  {
    List<SFVec2d>? value_;
    MFVec2d(this.value_) {
    }
}

class CollisionSensor extends X3DSensorNode {
    SFNode? collider_;
    MFNode? contacts_;
    SFBool? enabled_;
    MFNode? intersections_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    CollisionSensor({this.collider_, this.contacts_, this.enabled_, this.intersections_, this.IS_, this.isActive_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MFVec2f  {
    List<SFVec2f>? value_;
    MFVec2f(this.value_) {
    }
}

class PackagedShader extends X3DShaderNode implements X3DUrlObject, X3DProgrammableShaderObject {
    SFBool? activate_;
    SFTime? autoRefresh_;
    SFTime? autoRefreshTimeLimit_;
    SFString? description_;
    MFNode? field_;
    SFNode? IS_;
    SFBool? isSelected_;
    SFBool? isValid_;
    SFString? language_;
    SFBool? load_;
    SFNode? metadata_;
    MFString? url_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    PackagedShader({this.activate_, this.autoRefresh_, this.autoRefreshTimeLimit_, this.description_, this.field_, this.IS_, this.isSelected_, this.isValid_, this.language_, this.load_, this.metadata_, this.url_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MultiTextureCoordinate extends X3DTextureCoordinateNode {
    SFNode? IS_;
    SFNode? metadata_;
    MFNode? texCoord_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    MultiTextureCoordinate({this.IS_, this.metadata_, this.texCoord_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Analyser extends X3DSoundProcessingNode {
    SFInt32? channelCount_;
    SFString? channelCountMode_;
    SFString? channelInterpretation_;
    List<SFNode>? children_;
    SFString? description_;
    SFTime? elapsedTime_;
    SFBool? enabled_;
    SFInt32? fftSize_;
    SFInt32? frequencyBinCount_;
    SFFloat? gain_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isPaused_;
    SFFloat? maxDecibels_;
    SFNode? metadata_;
    SFFloat? minDecibels_;
    SFTime? pauseTime_;
    SFTime? resumeTime_;
    SFFloat? smoothingTimeConstant_;
    SFTime? startTime_;
    SFTime? stopTime_;
    SFTime? tailTime_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Analyser({this.channelCount_, this.channelCountMode_, this.channelInterpretation_, this.children_, this.description_, this.elapsedTime_, this.enabled_, this.fftSize_, this.frequencyBinCount_, this.gain_, this.IS_, this.isActive_, this.isPaused_, this.maxDecibels_, this.metadata_, this.minDecibels_, this.pauseTime_, this.resumeTime_, this.smoothingTimeConstant_, this.startTime_, this.stopTime_, this.tailTime_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DSequencerNode extends X3DChildNode {
    SFNode? IS_;
    MFFloat? key_;
    SFNode? metadata_;
    SFBool? next_;
    SFBool? previous_;
        SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DSequencerNode({this.IS_, this.key_, this.metadata_, this.next_, this.previous_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class IntegerSequencer extends X3DSequencerNode {
    SFNode? IS_;
    MFFloat? key_;
    MFInt32? keyValue_;
    SFNode? metadata_;
    SFBool? next_;
    SFBool? previous_;
        SFInt32? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    IntegerSequencer({this.IS_, this.key_, this.keyValue_, this.metadata_, this.next_, this.previous_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class TexCoordDamper2D extends X3DDamperNode {
    MFVec2f? initialDestination_;
    MFVec2f? initialValue_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
    SFInt32? order_;
            SFTime? tau_;
    SFFloat? tolerance_;
    MFVec2f? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TexCoordDamper2D({this.initialDestination_, this.initialValue_, this.IS_, this.isActive_, this.metadata_, this.order_, this.tau_, this.tolerance_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class BlendedVolumeStyle extends X3DComposableVolumeRenderStyleNode {
    SFBool? enabled_;
    SFNode? IS_;
    SFNode? metadata_;
    SFNode? renderStyle_;
    SFNode? voxels_;
    SFFloat? weightConstant1_;
    SFFloat? weightConstant2_;
    SFString? weightFunction1_;
    SFString? weightFunction2_;
    SFNode? weightTransferFunction1_;
    SFNode? weightTransferFunction2_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    BlendedVolumeStyle({this.enabled_, this.IS_, this.metadata_, this.renderStyle_, this.voxels_, this.weightConstant1_, this.weightConstant2_, this.weightFunction1_, this.weightFunction2_, this.weightTransferFunction1_, this.weightTransferFunction2_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DPickableObject {
    SFBool? pickable_;
    X3DPickableObject({this.pickable_}) {
    }
}

class PickableGroup extends X3DGroupingNode implements X3DPickableObject {
        SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    List<SFNode>? children_;
    SFNode? IS_;
    SFNode? metadata_;
    MFString? objectType_;
    SFBool? pickable_;
        SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    PickableGroup({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.children_, this.IS_, this.metadata_, this.objectType_, this.pickable_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class UnlitMaterial extends X3DOneSidedMaterialNode {
    SFColor? emissiveColor_;
    SFNode? emissiveTexture_;
    SFString? emissiveTextureMapping_;
    SFNode? IS_;
    SFNode? metadata_;
    SFFloat? normalScale_;
    SFNode? normalTexture_;
    SFString? normalTextureMapping_;
    SFFloat? transparency_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    UnlitMaterial({this.emissiveColor_, this.emissiveTexture_, this.emissiveTextureMapping_, this.IS_, this.metadata_, this.normalScale_, this.normalTexture_, this.normalTextureMapping_, this.transparency_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class LinePickSensor extends X3DPickSensorNode {
    SFBool? enabled_;
    SFString? intersectionType_;
    SFNode? IS_;
    SFBool? isActive_;
    SFString? matchCriterion_;
    SFNode? metadata_;
    MFString? objectType_;
    MFNode? pickedGeometry_;
    MFVec3f? pickedNormal_;
    MFVec3f? pickedPoint_;
    MFVec3f? pickedTextureCoordinate_;
    SFNode? pickingGeometry_;
    MFNode? pickTarget_;
    SFString? sortOrder_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    LinePickSensor({this.enabled_, this.intersectionType_, this.IS_, this.isActive_, this.matchCriterion_, this.metadata_, this.objectType_, this.pickedGeometry_, this.pickedNormal_, this.pickedPoint_, this.pickedTextureCoordinate_, this.pickingGeometry_, this.pickTarget_, this.sortOrder_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Matrix3VertexAttribute extends X3DVertexAttributeNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? name_;
    MFMatrix3f? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Matrix3VertexAttribute({this.IS_, this.metadata_, this.name_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class StaticGroup extends X3DChildNode implements X3DBoundedObject {
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    List<SFNode>? children_;
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    StaticGroup({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.children_, this.IS_, this.metadata_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class VolumeData extends X3DVolumeDataNode {
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFVec3f? dimensions_;
    SFNode? IS_;
    SFNode? metadata_;
    SFNode? renderStyle_;
    SFBool? visible_;
    SFNode? voxels_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    VolumeData({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.dimensions_, this.IS_, this.metadata_, this.renderStyle_, this.visible_, this.voxels_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class EdgeEnhancementVolumeStyle extends X3DComposableVolumeRenderStyleNode {
    SFColorRGBA? edgeColor_;
    SFBool? enabled_;
    SFFloat? gradientThreshold_;
    SFNode? IS_;
    SFNode? metadata_;
    SFNode? surfaceNormals_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    EdgeEnhancementVolumeStyle({this.edgeColor_, this.enabled_, this.gradientThreshold_, this.IS_, this.metadata_, this.surfaceNormals_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MFInt32  {
    List<SFInt32>? value_;
    MFInt32(this.value_) {
    }
}

class MFMatrix4f  {
    List<SFMatrix4f>? value_;
    MFMatrix4f(this.value_) {
    }
}

class SignalPdu extends X3DNetworkSensorNode implements X3DBoundedObject {
    SFString? address_;
    SFInt32? applicationID_;
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    MFInt32? data_;
    SFInt32? dataLength_;
    SFBool? enabled_;
    SFInt32? encodingScheme_;
    SFInt32? entityID_;
    SFVec3d? geoCoords_;
    MFString? geoSystem_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isNetworkReader_;
    SFBool? isNetworkWriter_;
    SFBool? isRtpHeaderHeard_;
    SFBool? isStandAlone_;
    SFNode? metadata_;
    SFString? multicastRelayHost_;
    SFInt32? multicastRelayPort_;
    SFString? networkMode_;
    SFInt32? port_;
    SFInt32? radioID_;
    SFTime? readInterval_;
    SFBool? rtpHeaderExpected_;
    SFInt32? sampleRate_;
    SFInt32? samples_;
    SFInt32? siteID_;
    SFInt32? tdlType_;
    SFTime? timestamp_;
    SFBool? visible_;
    SFInt32? whichGeometry_;
    SFTime? writeInterval_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    SignalPdu({this.address_, this.applicationID_, this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.data_, this.dataLength_, this.enabled_, this.encodingScheme_, this.entityID_, this.geoCoords_, this.geoSystem_, this.IS_, this.isActive_, this.isNetworkReader_, this.isNetworkWriter_, this.isRtpHeaderHeard_, this.isStandAlone_, this.metadata_, this.multicastRelayHost_, this.multicastRelayPort_, this.networkMode_, this.port_, this.radioID_, this.readInterval_, this.rtpHeaderExpected_, this.sampleRate_, this.samples_, this.siteID_, this.tdlType_, this.timestamp_, this.visible_, this.whichGeometry_, this.writeInterval_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class TriangleSet extends X3DComposedGeometryNode {
    MFNode? attrib_;
    SFBool? ccw_;
    SFNode? color_;
    SFBool? colorPerVertex_;
    SFNode? coord_;
    SFNode? fogCoord_;
    SFNode? IS_;
    SFNode? metadata_;
    SFNode? normal_;
    SFBool? normalPerVertex_;
    SFBool? solid_;
    SFNode? texCoord_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TriangleSet({this.attrib_, this.ccw_, this.color_, this.colorPerVertex_, this.coord_, this.fogCoord_, this.IS_, this.metadata_, this.normal_, this.normalPerVertex_, this.solid_, this.texCoord_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DInfoNode extends X3DChildNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DInfoNode({this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class WorldInfo extends X3DInfoNode {
    MFString? info_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? title_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    WorldInfo({this.info_, this.IS_, this.metadata_, this.title_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ArcClose2D extends X3DGeometryNode {
    SFString? closureType_;
    SFFloat? endAngle_;
    SFNode? IS_;
    SFNode? metadata_;
    SFFloat? radius_;
    SFBool? solid_;
    SFFloat? startAngle_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ArcClose2D({this.closureType_, this.endAngle_, this.IS_, this.metadata_, this.radius_, this.solid_, this.startAngle_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ImageTexture3D extends X3DTexture3DNode implements X3DUrlObject {
    SFTime? autoRefresh_;
    SFTime? autoRefreshTimeLimit_;
    SFString? description_;
    SFNode? IS_;
    SFBool? load_;
    SFNode? metadata_;
    SFBool? repeatR_;
    SFBool? repeatS_;
    SFBool? repeatT_;
    SFNode? textureProperties_;
    MFString? url_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ImageTexture3D({this.autoRefresh_, this.autoRefreshTimeLimit_, this.description_, this.IS_, this.load_, this.metadata_, this.repeatR_, this.repeatS_, this.repeatT_, this.textureProperties_, this.url_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DLayerNode extends X3DNode implements X3DPickableObject {
    SFNode? IS_;
    SFNode? metadata_;
    MFString? objectType_;
    SFBool? pickable_;
    SFNode? viewport_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DLayerNode({this.IS_, this.metadata_, this.objectType_, this.pickable_, this.viewport_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class EspduTransform extends X3DGroupingNode implements X3DNetworkSensorNode {
        SFString? address_;
    SFInt32? applicationID_;
    MFFloat? articulationParameterArray_;
    MFInt32? articulationParameterChangeIndicatorArray_;
    SFInt32? articulationParameterCount_;
    MFInt32? articulationParameterDesignatorArray_;
    MFInt32? articulationParameterIdPartAttachedToArray_;
    MFInt32? articulationParameterTypeArray_;
    SFFloat? articulationParameterValue0_;
    SFFloat? articulationParameterValue1_;
    SFFloat? articulationParameterValue2_;
    SFFloat? articulationParameterValue3_;
    SFFloat? articulationParameterValue4_;
    SFFloat? articulationParameterValue5_;
    SFFloat? articulationParameterValue6_;
    SFFloat? articulationParameterValue7_;
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFVec3f? center_;
    List<SFNode>? children_;
    SFTime? collideTime_;
    SFInt32? collisionType_;
    SFInt32? deadReckoning_;
    SFTime? detonateTime_;
    SFVec3f? detonationLocation_;
    SFVec3f? detonationRelativeLocation_;
    SFInt32? detonationResult_;
    SFBool? enabled_;
    SFInt32? entityCategory_;
    SFInt32? entityCountry_;
    SFInt32? entityDomain_;
    SFInt32? entityExtra_;
    SFInt32? entityID_;
    SFInt32? entityKind_;
    SFInt32? entitySpecific_;
    SFInt32? entitySubcategory_;
    SFInt32? eventApplicationID_;
    SFInt32? eventEntityID_;
    SFInt32? eventNumber_;
    SFInt32? eventSiteID_;
    SFBool? fired1_;
    SFBool? fired2_;
    SFTime? firedTime_;
    SFInt32? fireMissionIndex_;
    SFFloat? firingRange_;
    SFInt32? firingRate_;
    SFInt32? forceID_;
    SFInt32? fuse_;
    SFVec3d? geoCoords_;
    MFString? geoSystem_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isCollided_;
    SFBool? isDetonated_;
    SFBool? isNetworkReader_;
    SFBool? isNetworkWriter_;
    SFBool? isRtpHeaderHeard_;
    SFBool? isStandAlone_;
    SFVec3f? linearAcceleration_;
    SFVec3f? linearVelocity_;
    SFString? marking_;
    SFNode? metadata_;
    SFString? multicastRelayHost_;
    SFInt32? multicastRelayPort_;
    SFInt32? munitionApplicationID_;
    SFVec3f? munitionEndPoint_;
    SFInt32? munitionEntityID_;
    SFInt32? munitionQuantity_;
    SFInt32? munitionSiteID_;
    SFVec3f? munitionStartPoint_;
    SFString? networkMode_;
    SFInt32? port_;
    SFTime? readInterval_;
        SFRotation? rotation_;
    SFBool? rtpHeaderExpected_;
    SFVec3f? scale_;
    SFRotation? scaleOrientation_;
                                    SFInt32? siteID_;
    SFTime? timestamp_;
    SFVec3f? translation_;
    SFBool? visible_;
    SFInt32? warhead_;
    SFTime? writeInterval_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    EspduTransform({this.address_, this.applicationID_, this.articulationParameterArray_, this.articulationParameterChangeIndicatorArray_, this.articulationParameterCount_, this.articulationParameterDesignatorArray_, this.articulationParameterIdPartAttachedToArray_, this.articulationParameterTypeArray_, this.articulationParameterValue0_, this.articulationParameterValue1_, this.articulationParameterValue2_, this.articulationParameterValue3_, this.articulationParameterValue4_, this.articulationParameterValue5_, this.articulationParameterValue6_, this.articulationParameterValue7_, this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.center_, this.children_, this.collideTime_, this.collisionType_, this.deadReckoning_, this.detonateTime_, this.detonationLocation_, this.detonationRelativeLocation_, this.detonationResult_, this.enabled_, this.entityCategory_, this.entityCountry_, this.entityDomain_, this.entityExtra_, this.entityID_, this.entityKind_, this.entitySpecific_, this.entitySubcategory_, this.eventApplicationID_, this.eventEntityID_, this.eventNumber_, this.eventSiteID_, this.fired1_, this.fired2_, this.firedTime_, this.fireMissionIndex_, this.firingRange_, this.firingRate_, this.forceID_, this.fuse_, this.geoCoords_, this.geoSystem_, this.IS_, this.isActive_, this.isCollided_, this.isDetonated_, this.isNetworkReader_, this.isNetworkWriter_, this.isRtpHeaderHeard_, this.isStandAlone_, this.linearAcceleration_, this.linearVelocity_, this.marking_, this.metadata_, this.multicastRelayHost_, this.multicastRelayPort_, this.munitionApplicationID_, this.munitionEndPoint_, this.munitionEntityID_, this.munitionQuantity_, this.munitionSiteID_, this.munitionStartPoint_, this.networkMode_, this.port_, this.readInterval_, this.rotation_, this.rtpHeaderExpected_, this.scale_, this.scaleOrientation_, this.siteID_, this.timestamp_, this.translation_, this.visible_, this.warhead_, this.writeInterval_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class IndexedTriangleStripSet extends X3DComposedGeometryNode {
    MFNode? attrib_;
    SFBool? ccw_;
    SFNode? color_;
    SFBool? colorPerVertex_;
    SFNode? coord_;
    SFNode? fogCoord_;
    MFInt32? index_;
    SFNode? IS_;
    SFNode? metadata_;
    SFNode? normal_;
    SFBool? normalPerVertex_;
        SFBool? solid_;
    SFNode? texCoord_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    IndexedTriangleStripSet({this.attrib_, this.ccw_, this.color_, this.colorPerVertex_, this.coord_, this.fogCoord_, this.index_, this.IS_, this.metadata_, this.normal_, this.normalPerVertex_, this.solid_, this.texCoord_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DSoundDestinationNode extends X3DSoundNode {
    SFInt32? channelCount_;
    SFString? channelCountMode_;
    SFString? channelInterpretation_;
    SFString? description_;
    SFBool? enabled_;
    SFFloat? gain_;
    SFNode? IS_;
    SFBool? isActive_;
    SFString? mediaDeviceID_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DSoundDestinationNode({this.channelCount_, this.channelCountMode_, this.channelInterpretation_, this.description_, this.enabled_, this.gain_, this.IS_, this.isActive_, this.mediaDeviceID_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class FillProperties extends X3DAppearanceChildNode {
    SFBool? filled_;
    SFColor? hatchColor_;
    SFBool? hatched_;
    SFInt32? hatchStyle_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    FillProperties({this.filled_, this.hatchColor_, this.hatched_, this.hatchStyle_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class TextureCoordinateGenerator extends X3DSingleTextureCoordinateNode {
    SFNode? IS_;
    SFString? mapping_;
    SFNode? metadata_;
    SFString? mode_;
    MFFloat? parameter_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TextureCoordinateGenerator({this.IS_, this.mapping_, this.metadata_, this.mode_, this.parameter_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SplinePositionInterpolator2D extends X3DInterpolatorNode {
    SFBool? closed_;
    SFNode? IS_;
    MFFloat? key_;
    MFVec2f? keyValue_;
    MFVec2f? keyVelocity_;
    SFNode? metadata_;
    SFBool? normalizeVelocity_;
        SFVec2f? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    SplinePositionInterpolator2D({this.closed_, this.IS_, this.key_, this.keyValue_, this.keyVelocity_, this.metadata_, this.normalizeVelocity_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MFRotation  {
    List<SFRotation>? value_;
    MFRotation(this.value_) {
    }
}

class CoordinateInterpolator2D extends X3DInterpolatorNode {
    SFNode? IS_;
    MFFloat? key_;
    MFVec2f? keyValue_;
    SFNode? metadata_;
        MFVec2f? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    CoordinateInterpolator2D({this.IS_, this.key_, this.keyValue_, this.metadata_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class CADPart extends X3DProductStructureChildNode implements X3DGroupingNode {
        SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFVec3f? center_;
    List<SFNode>? children_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? name_;
        SFRotation? rotation_;
    SFVec3f? scale_;
    SFRotation? scaleOrientation_;
    SFVec3f? translation_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    CADPart({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.center_, this.children_, this.IS_, this.metadata_, this.name_, this.rotation_, this.scale_, this.scaleOrientation_, this.translation_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Scene {
    List<SFNode>? children_;
    Scene({this.children_}) {
    }
}

class MFColor  {
    List<SFColor>? value_;
    MFColor(this.value_) {
    }
}

class MotorJoint extends X3DRigidJointNode {
    SFBool? autoCalc_;
    SFFloat? axis1Angle_;
    SFFloat? axis1Torque_;
    SFFloat? axis2Angle_;
    SFFloat? axis2Torque_;
    SFFloat? axis3Angle_;
    SFFloat? axis3Torque_;
    SFNode? body1_;
    SFNode? body2_;
    SFInt32? enabledAxes_;
    MFString? forceOutput_;
    SFNode? IS_;
    SFNode? metadata_;
    SFFloat? motor1Angle_;
    SFFloat? motor1AngleRate_;
    SFVec3f? motor1Axis_;
    SFFloat? motor2Angle_;
    SFFloat? motor2AngleRate_;
    SFVec3f? motor2Axis_;
    SFFloat? motor3Angle_;
    SFFloat? motor3AngleRate_;
    SFVec3f? motor3Axis_;
    SFFloat? stop1Bounce_;
    SFFloat? stop1ErrorCorrection_;
    SFFloat? stop2Bounce_;
    SFFloat? stop2ErrorCorrection_;
    SFFloat? stop3Bounce_;
    SFFloat? stop3ErrorCorrection_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    MotorJoint({this.autoCalc_, this.axis1Angle_, this.axis1Torque_, this.axis2Angle_, this.axis2Torque_, this.axis3Angle_, this.axis3Torque_, this.body1_, this.body2_, this.enabledAxes_, this.forceOutput_, this.IS_, this.metadata_, this.motor1Angle_, this.motor1AngleRate_, this.motor1Axis_, this.motor2Angle_, this.motor2AngleRate_, this.motor2Axis_, this.motor3Angle_, this.motor3AngleRate_, this.motor3Axis_, this.stop1Bounce_, this.stop1ErrorCorrection_, this.stop2Bounce_, this.stop2ErrorCorrection_, this.stop3Bounce_, this.stop3ErrorCorrection_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MultiTextureTransform extends X3DTextureTransformNode {
    SFNode? IS_;
    SFNode? metadata_;
    MFNode? textureTransform_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    MultiTextureTransform({this.IS_, this.metadata_, this.textureTransform_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class CylinderSensor extends X3DDragSensorNode {
    SFBool? autoOffset_;
    SFRotation? axisRotation_;
    SFString? description_;
    SFFloat? diskAngle_;
    SFBool? enabled_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isOver_;
    SFFloat? maxAngle_;
    SFNode? metadata_;
    SFFloat? minAngle_;
    SFFloat? offset_;
    SFRotation? rotation_;
    SFVec3f? trackPoint_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    CylinderSensor({this.autoOffset_, this.axisRotation_, this.description_, this.diskAngle_, this.enabled_, this.IS_, this.isActive_, this.isOver_, this.maxAngle_, this.metadata_, this.minAngle_, this.offset_, this.rotation_, this.trackPoint_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MFTime  {
    List<SFTime>? value_;
    MFTime(this.value_) {
    }
}

class MetadataSet extends X3DNode implements X3DMetadataObject {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? name_;
    SFString? reference_;
    MFNode? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    MetadataSet({this.IS_, this.metadata_, this.name_, this.reference_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class PointPickSensor extends X3DPickSensorNode {
    SFBool? enabled_;
    SFString? intersectionType_;
    SFNode? IS_;
    SFBool? isActive_;
    SFString? matchCriterion_;
    SFNode? metadata_;
    MFString? objectType_;
    MFNode? pickedGeometry_;
    MFVec3f? pickedPoint_;
    SFNode? pickingGeometry_;
    MFNode? pickTarget_;
    SFString? sortOrder_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    PointPickSensor({this.enabled_, this.intersectionType_, this.IS_, this.isActive_, this.matchCriterion_, this.metadata_, this.objectType_, this.pickedGeometry_, this.pickedPoint_, this.pickingGeometry_, this.pickTarget_, this.sortOrder_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ElevationGrid extends X3DGeometryNode {
    MFNode? attrib_;
    SFBool? ccw_;
    SFNode? color_;
    SFBool? colorPerVertex_;
    SFFloat? creaseAngle_;
    SFNode? fogCoord_;
    MFFloat? height_;
    SFNode? IS_;
    SFNode? metadata_;
    SFNode? normal_;
    SFBool? normalPerVertex_;
        SFBool? solid_;
    SFNode? texCoord_;
    SFInt32? xDimension_;
    SFFloat? xSpacing_;
    SFInt32? zDimension_;
    SFFloat? zSpacing_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ElevationGrid({this.attrib_, this.ccw_, this.color_, this.colorPerVertex_, this.creaseAngle_, this.fogCoord_, this.height_, this.IS_, this.metadata_, this.normal_, this.normalPerVertex_, this.solid_, this.texCoord_, this.xDimension_, this.xSpacing_, this.zDimension_, this.zSpacing_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Disk2D extends X3DGeometryNode {
    SFFloat? innerRadius_;
    SFNode? IS_;
    SFNode? metadata_;
    SFFloat? outerRadius_;
    SFBool? solid_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Disk2D({this.innerRadius_, this.IS_, this.metadata_, this.outerRadius_, this.solid_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ParticleSystem extends X3DShapeNode {
    Appearance? appearance_;
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFBool? castShadow_;
    MFNode? color_;
    MFFloat? colorKey_;
    SFBool? createParticles_;
    SFNode? emitter_;
    SFBool? enabled_;
    X3DGeometryNode? geometry_;
    SFString? geometryType_;
    SFNode? IS_;
    SFBool? isActive_;
    SFFloat? lifetimeVariation_;
    SFInt32? maxParticles_;
    SFNode? metadata_;
    SFFloat? particleLifetime_;
    SFVec2f? particleSize_;
    MFNode? physics_;
    SFNode? texCoord_;
    MFFloat? texCoordKey_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ParticleSystem({this.appearance_, this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.castShadow_, this.color_, this.colorKey_, this.createParticles_, this.emitter_, this.enabled_, this.geometry_, this.geometryType_, this.IS_, this.isActive_, this.lifetimeVariation_, this.maxParticles_, this.metadata_, this.particleLifetime_, this.particleSize_, this.physics_, this.texCoord_, this.texCoordKey_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class OrientationDamper extends X3DDamperNode {
    SFRotation? initialDestination_;
    SFRotation? initialValue_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
    SFInt32? order_;
            SFTime? tau_;
    SFFloat? tolerance_;
    SFRotation? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    OrientationDamper({this.initialDestination_, this.initialValue_, this.IS_, this.isActive_, this.metadata_, this.order_, this.tau_, this.tolerance_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class LineSet extends X3DGeometryNode {
    MFNode? attrib_;
    SFNode? color_;
    SFNode? coord_;
    SFNode? fogCoord_;
    SFNode? IS_;
    SFNode? metadata_;
    SFNode? normal_;
    MFInt32? vertexCount_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    LineSet({this.attrib_, this.color_, this.coord_, this.fogCoord_, this.IS_, this.metadata_, this.normal_, this.vertexCount_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SliderJoint extends X3DRigidJointNode {
    SFVec3f? axis_;
    SFNode? body1_;
    SFNode? body2_;
    MFString? forceOutput_;
    SFNode? IS_;
    SFFloat? maxSeparation_;
    SFNode? metadata_;
    SFFloat? minSeparation_;
    SFFloat? separation_;
    SFFloat? separationRate_;
    SFFloat? sliderForce_;
    SFFloat? stopBounce_;
    SFFloat? stopErrorCorrection_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    SliderJoint({this.axis_, this.body1_, this.body2_, this.forceOutput_, this.IS_, this.maxSeparation_, this.metadata_, this.minSeparation_, this.separation_, this.separationRate_, this.sliderForce_, this.stopBounce_, this.stopErrorCorrection_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class IMPORT {
    SFString? AS_;
    SFString? importedDEF_;
    SFString? inlineDEF_;
    IMPORT({this.AS_, this.importedDEF_, this.inlineDEF_}) {
    }
}

class Extrusion extends X3DGeometryNode {
    SFBool? beginCap_;
    SFBool? ccw_;
    SFBool? convex_;
    SFFloat? creaseAngle_;
    MFVec2f? crossSection_;
    SFBool? endCap_;
    SFNode? IS_;
    SFNode? metadata_;
    MFRotation? orientation_;
    MFVec2f? scale_;
                    SFBool? solid_;
    MFVec3f? spine_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Extrusion({this.beginCap_, this.ccw_, this.convex_, this.creaseAngle_, this.crossSection_, this.endCap_, this.IS_, this.metadata_, this.orientation_, this.scale_, this.solid_, this.spine_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class NurbsCurve extends X3DParametricGeometryNode {
    SFBool? closed_;
    SFNode? controlPoint_;
    SFNode? IS_;
    MFDouble? knot_;
    SFNode? metadata_;
    SFInt32? order_;
    SFInt32? tessellation_;
    MFDouble? weight_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    NurbsCurve({this.closed_, this.controlPoint_, this.IS_, this.knot_, this.metadata_, this.order_, this.tessellation_, this.weight_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class CADLayer extends X3DGroupingNode {
        SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    List<SFNode>? children_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? name_;
        SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    CADLayer({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.children_, this.IS_, this.metadata_, this.name_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ForcePhysicsModel extends X3DParticlePhysicsModelNode {
    SFBool? enabled_;
    SFVec3f? force_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ForcePhysicsModel({this.enabled_, this.force_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ShaderProgram extends X3DNode implements X3DUrlObject, X3DProgrammableShaderObject {
    SFTime? autoRefresh_;
    SFTime? autoRefreshTimeLimit_;
    SFString? description_;
    MFNode? field_;
    SFNode? IS_;
    SFBool? load_;
    SFNode? metadata_;
    SFString? type_;
    MFString? url_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ShaderProgram({this.autoRefresh_, this.autoRefreshTimeLimit_, this.description_, this.field_, this.IS_, this.load_, this.metadata_, this.type_, this.url_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class FogCoordinate extends X3DGeometricPropertyNode {
    MFFloat? depth_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    FogCoordinate({this.depth_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class CoordinateDouble extends X3DCoordinateNode {
    SFNode? IS_;
    SFNode? metadata_;
    MFVec3d? point_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    CoordinateDouble({this.IS_, this.metadata_, this.point_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DScriptNode extends X3DChildNode implements X3DUrlObject {
    SFTime? autoRefresh_;
    SFTime? autoRefreshTimeLimit_;
    SFString? description_;
    SFNode? IS_;
    SFBool? load_;
    SFNode? metadata_;
    MFString? url_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DScriptNode({this.autoRefresh_, this.autoRefreshTimeLimit_, this.description_, this.IS_, this.load_, this.metadata_, this.url_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Script extends X3DScriptNode {
    SFTime? autoRefresh_;
    SFTime? autoRefreshTimeLimit_;
    SFString? description_;
    SFBool? directOutput_;
    MFNode? field_;
    SFNode? IS_;
    SFBool? load_;
    SFNode? metadata_;
    SFBool? mustEvaluate_;
    MFString? url_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Script({this.autoRefresh_, this.autoRefreshTimeLimit_, this.description_, this.directOutput_, this.field_, this.IS_, this.load_, this.metadata_, this.mustEvaluate_, this.url_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SFDouble {
    double? value_;
    SFDouble(this.value_) {
    }
}

class NurbsTrimmedSurface extends X3DNurbsSurfaceGeometryNode {
    MFNode? TrimmingContour_;
    SFNode? controlPoint_;
    SFNode? IS_;
    SFNode? metadata_;
        SFBool? solid_;
    SFNode? texCoord_;
    MFNode? trimmingContour_;
    SFBool? uClosed_;
    SFInt32? uDimension_;
    MFDouble? uKnot_;
    SFInt32? uOrder_;
    SFInt32? uTessellation_;
    SFBool? vClosed_;
    SFInt32? vDimension_;
    MFDouble? vKnot_;
    SFInt32? vOrder_;
    SFInt32? vTessellation_;
    MFDouble? weight_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    NurbsTrimmedSurface({this.TrimmingContour_, this.controlPoint_, this.IS_, this.metadata_, this.solid_, this.texCoord_, this.trimmingContour_, this.uClosed_, this.uDimension_, this.uKnot_, this.uOrder_, this.uTessellation_, this.vClosed_, this.vDimension_, this.vKnot_, this.vOrder_, this.vTessellation_, this.weight_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DFogObject {
    SFColor? color_;
    SFString? fogType_;
    SFFloat? visibilityRange_;
    X3DFogObject({this.color_, this.fogType_, this.visibilityRange_}) {
    }
}

class Fog extends X3DBindableNode implements X3DFogObject {
    SFTime? bindTime_;
    SFColor? color_;
    SFString? fogType_;
    SFNode? IS_;
    SFBool? isBound_;
    SFNode? metadata_;
        SFFloat? visibilityRange_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Fog({this.bindTime_, this.color_, this.fogType_, this.IS_, this.isBound_, this.metadata_, this.visibilityRange_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class IndexedTriangleFanSet extends X3DComposedGeometryNode {
    MFNode? attrib_;
    SFBool? ccw_;
    SFNode? color_;
    SFBool? colorPerVertex_;
    SFNode? coord_;
    SFNode? fogCoord_;
    MFInt32? index_;
    SFNode? IS_;
    SFNode? metadata_;
    SFNode? normal_;
    SFBool? normalPerVertex_;
        SFBool? solid_;
    SFNode? texCoord_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    IndexedTriangleFanSet({this.attrib_, this.ccw_, this.color_, this.colorPerVertex_, this.coord_, this.fogCoord_, this.index_, this.IS_, this.metadata_, this.normal_, this.normalPerVertex_, this.solid_, this.texCoord_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class TextureProjectorParallel extends X3DTextureProjectorNode {
    SFFloat? ambientIntensity_;
    SFFloat? aspectRatio_;
    SFColor? color_;
    SFString? description_;
    SFVec3f? direction_;
    SFFloat? farDistance_;
    SFVec4f? fieldOfView_;
    SFBool? global_;
    SFFloat? intensity_;
    SFNode? IS_;
    SFVec3f? location_;
    SFNode? metadata_;
    SFFloat? nearDistance_;
    SFBool? on_;
    SFFloat? shadowIntensity_;
    SFBool? shadows_;
    SFNode? texture_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TextureProjectorParallel({this.ambientIntensity_, this.aspectRatio_, this.color_, this.description_, this.direction_, this.farDistance_, this.fieldOfView_, this.global_, this.intensity_, this.IS_, this.location_, this.metadata_, this.nearDistance_, this.on_, this.shadowIntensity_, this.shadows_, this.texture_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MFColorRGBA  {
    List<SFColorRGBA>? value_;
    MFColorRGBA(this.value_) {
    }
}

class BooleanSequencer extends X3DSequencerNode {
    SFNode? IS_;
    MFFloat? key_;
    MFBool? keyValue_;
    SFNode? metadata_;
    SFBool? next_;
    SFBool? previous_;
        SFBool? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    BooleanSequencer({this.IS_, this.key_, this.keyValue_, this.metadata_, this.next_, this.previous_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class TextureCoordinate3D extends X3DSingleTextureCoordinateNode {
    SFNode? IS_;
    SFString? mapping_;
    SFNode? metadata_;
    MFVec3f? point_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TextureCoordinate3D({this.IS_, this.mapping_, this.metadata_, this.point_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MetadataString extends X3DNode implements X3DMetadataObject {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? name_;
    SFString? reference_;
    MFString? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    MetadataString({this.IS_, this.metadata_, this.name_, this.reference_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class component {
    SFInt32? level_;
    SFString? name_;
    component({this.level_, this.name_}) {
    }
}

class SFInt32 {
    int? value_;
    SFInt32(this.value_) {
    }
}

class PixelTexture extends X3DTexture2DNode {
    SFString? description_;
    SFImage? image_;
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? repeatS_;
    SFBool? repeatT_;
    SFNode? textureProperties_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    PixelTexture({this.description_, this.image_, this.IS_, this.metadata_, this.repeatS_, this.repeatT_, this.textureProperties_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MFDouble  {
    List<SFDouble>? value_;
    MFDouble(this.value_) {
    }
}

class ProtoBody {
    List<SFNode>? children_;
    ProtoBody({this.children_}) {
    }
}

class Anchor extends X3DGroupingNode implements X3DUrlObject {
        SFTime? autoRefresh_;
    SFTime? autoRefreshTimeLimit_;
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    List<SFNode>? children_;
    SFString? description_;
    SFNode? IS_;
    SFBool? load_;
    SFNode? metadata_;
    MFString? parameter_;
        MFString? url_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Anchor({this.autoRefresh_, this.autoRefreshTimeLimit_, this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.children_, this.description_, this.IS_, this.load_, this.metadata_, this.parameter_, this.url_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Cylinder extends X3DGeometryNode {
    SFBool? bottom_;
    SFFloat? height_;
    SFNode? IS_;
    SFNode? metadata_;
    SFFloat? radius_;
    SFBool? side_;
    SFBool? solid_;
    SFBool? top_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Cylinder({this.bottom_, this.height_, this.IS_, this.metadata_, this.radius_, this.side_, this.solid_, this.top_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ChannelSplitter extends X3DSoundChannelNode {
    SFInt32? channelCount_;
    SFString? channelCountMode_;
    SFString? channelInterpretation_;
    List<SFNode>? children_;
    SFString? description_;
    SFBool? enabled_;
    SFFloat? gain_;
    SFNode? IS_;
    SFNode? metadata_;
    MFNode? outputs_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ChannelSplitter({this.channelCount_, this.channelCountMode_, this.channelInterpretation_, this.children_, this.description_, this.enabled_, this.gain_, this.IS_, this.metadata_, this.outputs_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class CoordinateChaser extends X3DChaserNode {
    SFTime? duration_;
    MFVec3f? initialDestination_;
    MFVec3f? initialValue_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
            MFVec3f? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    CoordinateChaser({this.duration_, this.initialDestination_, this.initialValue_, this.IS_, this.isActive_, this.metadata_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class TimeTrigger extends X3DTriggerNode {
    SFNode? IS_;
    SFNode? metadata_;
        SFTime? triggerTime_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TimeTrigger({this.IS_, this.metadata_, this.triggerTime_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class QuadSet extends X3DComposedGeometryNode {
    MFNode? attrib_;
    SFBool? ccw_;
    SFNode? color_;
    SFBool? colorPerVertex_;
    SFNode? coord_;
    SFNode? fogCoord_;
    SFNode? IS_;
    SFNode? metadata_;
    SFNode? normal_;
    SFBool? normalPerVertex_;
    SFBool? solid_;
    SFNode? texCoord_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    QuadSet({this.attrib_, this.ccw_, this.color_, this.colorPerVertex_, this.coord_, this.fogCoord_, this.IS_, this.metadata_, this.normal_, this.normalPerVertex_, this.solid_, this.texCoord_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class FontStyle extends X3DFontStyleNode {
    SFString? class_;
    MFString? family_;
    SFBool? horizontal_;
    SFNode? IS_;
    MFString? justify_;
    SFString? language_;
    SFBool? leftToRight_;
    SFNode? metadata_;
    SFFloat? size_;
    SFFloat? spacing_;
    SFString? style_;
    SFBool? topToBottom_;
    SFString? DEF_;
    SFString? USE_;
    FontStyle({this.class_, this.family_, this.horizontal_, this.IS_, this.justify_, this.language_, this.leftToRight_, this.metadata_, this.size_, this.spacing_, this.style_, this.topToBottom_, this.DEF_, this.USE_}) {
    }
}

class IndexedFaceSet extends X3DComposedGeometryNode {
    MFNode? attrib_;
    SFBool? ccw_;
    SFNode? color_;
    MFInt32? colorIndex_;
    SFBool? colorPerVertex_;
    SFBool? convex_;
    SFNode? coord_;
    MFInt32? coordIndex_;
    SFFloat? creaseAngle_;
    SFNode? fogCoord_;
    SFNode? IS_;
    SFNode? metadata_;
    SFNode? normal_;
    MFInt32? normalIndex_;
    SFBool? normalPerVertex_;
                    SFBool? solid_;
    SFNode? texCoord_;
    MFInt32? texCoordIndex_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    IndexedFaceSet({this.attrib_, this.ccw_, this.color_, this.colorIndex_, this.colorPerVertex_, this.convex_, this.coord_, this.coordIndex_, this.creaseAngle_, this.fogCoord_, this.IS_, this.metadata_, this.normal_, this.normalIndex_, this.normalPerVertex_, this.solid_, this.texCoord_, this.texCoordIndex_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Transform extends X3DGroupingNode {
        SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFVec3f? center_;
    List<SFNode>? children_;
    SFNode? IS_;
    SFNode? metadata_;
        SFRotation? rotation_;
    SFVec3f? scale_;
    SFRotation? scaleOrientation_;
    SFVec3f? translation_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Transform({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.center_, this.children_, this.IS_, this.metadata_, this.rotation_, this.scale_, this.scaleOrientation_, this.translation_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ProtoInterface {
    MFNode? field_;
    ProtoInterface({this.field_}) {
    }
}

class BoundaryEnhancementVolumeStyle extends X3DComposableVolumeRenderStyleNode {
    SFFloat? boundaryOpacity_;
    SFBool? enabled_;
    SFNode? IS_;
    SFNode? metadata_;
    SFFloat? opacityFactor_;
    SFFloat? retainedOpacity_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    BoundaryEnhancementVolumeStyle({this.boundaryOpacity_, this.enabled_, this.IS_, this.metadata_, this.opacityFactor_, this.retainedOpacity_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3DPrototypeInstance extends X3DNode {
    SFNode? IS_;
    SFNode? metadata_;
    X3DPrototypeInstance({this.IS_, this.metadata_}) {
    }
}

class PhysicalMaterial extends X3DOneSidedMaterialNode {
    SFColor? baseColor_;
    SFNode? baseTexture_;
    SFString? baseTextureMapping_;
    SFColor? emissiveColor_;
    SFNode? emissiveTexture_;
    SFString? emissiveTextureMapping_;
    SFNode? IS_;
    SFNode? metadata_;
    SFFloat? metallic_;
    SFNode? metallicRoughnessTexture_;
    SFString? metallicRoughnessTextureMapping_;
    SFFloat? normalScale_;
    SFNode? normalTexture_;
    SFString? normalTextureMapping_;
    SFFloat? occlusionStrength_;
    SFNode? occlusionTexture_;
    SFString? occlusionTextureMapping_;
    SFFloat? roughness_;
    SFFloat? transparency_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    PhysicalMaterial({this.baseColor_, this.baseTexture_, this.baseTextureMapping_, this.emissiveColor_, this.emissiveTexture_, this.emissiveTextureMapping_, this.IS_, this.metadata_, this.metallic_, this.metallicRoughnessTexture_, this.metallicRoughnessTextureMapping_, this.normalScale_, this.normalTexture_, this.normalTextureMapping_, this.occlusionStrength_, this.occlusionTexture_, this.occlusionTextureMapping_, this.roughness_, this.transparency_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Rectangle2D extends X3DGeometryNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFVec2f? size_;
    SFBool? solid_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Rectangle2D({this.IS_, this.metadata_, this.size_, this.solid_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MFMatrix4d  {
    List<SFMatrix4d>? value_;
    MFMatrix4d(this.value_) {
    }
}

class BooleanFilter extends X3DChildNode {
    SFBool? inputFalse_;
    SFBool? inputNegate_;
    SFBool? inputTrue_;
    SFNode? IS_;
    SFNode? metadata_;
        SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    BooleanFilter({this.inputFalse_, this.inputNegate_, this.inputTrue_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SFVec3d {
    List<SFDouble>? value_;
    SFVec3d(this.value_) {
    }
}

class SFVec3f {
    List<SFDouble>? value_;
    SFVec3f(this.value_) {
    }
}

class ProtoInstance extends X3DPrototypeInstance implements X3DChildNode {
    MFNode? fieldValue_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? name_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ProtoInstance({this.fieldValue_, this.IS_, this.metadata_, this.name_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class LocalFog extends X3DChildNode implements X3DFogObject {
    SFColor? color_;
    SFBool? enabled_;
    SFString? fogType_;
    SFNode? IS_;
    SFNode? metadata_;
    SFFloat? visibilityRange_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    LocalFog({this.color_, this.enabled_, this.fogType_, this.IS_, this.metadata_, this.visibilityRange_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Switch extends X3DGroupingNode {
        SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    List<SFNode>? children_;
    SFNode? IS_;
    SFNode? metadata_;
        SFBool? visible_;
    SFInt32? whichChoice_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Switch({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.children_, this.IS_, this.metadata_, this.visible_, this.whichChoice_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class PointLight extends X3DLightNode {
    SFFloat? ambientIntensity_;
    SFVec3f? attenuation_;
    SFColor? color_;
    SFBool? global_;
    SFFloat? intensity_;
    SFNode? IS_;
    SFVec3f? location_;
    SFNode? metadata_;
    SFBool? on_;
    SFFloat? radius_;
    SFFloat? shadowIntensity_;
    SFBool? shadows_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    PointLight({this.ambientIntensity_, this.attenuation_, this.color_, this.global_, this.intensity_, this.IS_, this.location_, this.metadata_, this.on_, this.radius_, this.shadowIntensity_, this.shadows_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class HAnimSegment extends X3DGroupingNode {
        SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFVec3f? centerOfMass_;
    List<SFNode>? children_;
    SFNode? coord_;
    SFString? description_;
    MFNode? displacers_;
    SFNode? IS_;
    SFFloat? mass_;
    SFNode? metadata_;
    MFFloat? momentsOfInertia_;
    SFString? name_;
        SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    HAnimSegment({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.centerOfMass_, this.children_, this.coord_, this.description_, this.displacers_, this.IS_, this.mass_, this.metadata_, this.momentsOfInertia_, this.name_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class CollidableOffset extends X3DNBodyCollidableNode {
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFNode? collidable_;
    SFBool? enabled_;
    SFNode? IS_;
    SFNode? metadata_;
    SFRotation? rotation_;
    SFVec3f? translation_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    CollidableOffset({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.collidable_, this.enabled_, this.IS_, this.metadata_, this.rotation_, this.translation_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class RigidBody extends X3DNode {
    SFFloat? angularDampingFactor_;
    SFVec3f? angularVelocity_;
    SFBool? autoDamp_;
    SFBool? autoDisable_;
    SFBool? bboxDisplay_;
    SFVec3f? centerOfMass_;
    SFFloat? disableAngularSpeed_;
    SFFloat? disableLinearSpeed_;
    SFTime? disableTime_;
    SFBool? enabled_;
    SFVec3f? finiteRotationAxis_;
    SFBool? fixed_;
    MFVec3f? forces_;
    X3DGeometryNode? geometry_;
    SFMatrix3f? inertia_;
    SFNode? IS_;
    SFFloat? linearDampingFactor_;
    SFVec3f? linearVelocity_;
    SFFloat? mass_;
    SFNode? massDensityModel_;
    SFNode? metadata_;
    SFRotation? orientation_;
    SFVec3f? position_;
    MFVec3f? torques_;
    SFBool? useFiniteRotation_;
    SFBool? useGlobalGravity_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    RigidBody({this.angularDampingFactor_, this.angularVelocity_, this.autoDamp_, this.autoDisable_, this.bboxDisplay_, this.centerOfMass_, this.disableAngularSpeed_, this.disableLinearSpeed_, this.disableTime_, this.enabled_, this.finiteRotationAxis_, this.fixed_, this.forces_, this.geometry_, this.inertia_, this.IS_, this.linearDampingFactor_, this.linearVelocity_, this.mass_, this.massDensityModel_, this.metadata_, this.orientation_, this.position_, this.torques_, this.useFiniteRotation_, this.useGlobalGravity_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class PolylineEmitter extends X3DParticleEmitterNode {
    SFNode? coord_;
    MFInt32? coordIndex_;
    SFVec3f? direction_;
    SFNode? IS_;
    SFFloat? mass_;
    SFNode? metadata_;
        SFFloat? speed_;
    SFFloat? surfaceArea_;
    SFFloat? variation_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    PolylineEmitter({this.coord_, this.coordIndex_, this.direction_, this.IS_, this.mass_, this.metadata_, this.speed_, this.surfaceArea_, this.variation_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class GeoTransform extends X3DGroupingNode {
        SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    List<SFNode>? children_;
    SFVec3d? geoCenter_;
    SFNode? geoOrigin_;
    MFString? geoSystem_;
    SFNode? IS_;
    SFNode? metadata_;
        SFRotation? rotation_;
    SFVec3f? scale_;
    SFRotation? scaleOrientation_;
    SFVec3f? translation_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    GeoTransform({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.children_, this.geoCenter_, this.geoOrigin_, this.geoSystem_, this.IS_, this.metadata_, this.rotation_, this.scale_, this.scaleOrientation_, this.translation_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class LOD extends X3DGroupingNode {
        SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFVec3f? center_;
    List<SFNode>? children_;
    SFBool? forceTransitions_;
    SFNode? IS_;
    SFInt32? level_;
    SFNode? metadata_;
    MFFloat? range_;
        SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    LOD({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.center_, this.children_, this.forceTransitions_, this.IS_, this.level_, this.metadata_, this.range_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class TextureBackground extends X3DBackgroundNode {
    SFNode? backTexture_;
    SFTime? bindTime_;
    SFNode? bottomTexture_;
    SFNode? frontTexture_;
    MFFloat? groundAngle_;
    MFColor? groundColor_;
    SFNode? IS_;
    SFBool? isBound_;
    SFNode? leftTexture_;
    SFNode? metadata_;
    SFNode? rightTexture_;
        MFFloat? skyAngle_;
    MFColor? skyColor_;
    SFNode? topTexture_;
    SFFloat? transparency_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TextureBackground({this.backTexture_, this.bindTime_, this.bottomTexture_, this.frontTexture_, this.groundAngle_, this.groundColor_, this.IS_, this.isBound_, this.leftTexture_, this.metadata_, this.rightTexture_, this.skyAngle_, this.skyColor_, this.topTexture_, this.transparency_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Delay extends X3DSoundProcessingNode {
    SFInt32? channelCount_;
    SFString? channelCountMode_;
    SFString? channelInterpretation_;
    List<SFNode>? children_;
    SFTime? delayTime_;
    SFString? description_;
    SFTime? elapsedTime_;
    SFBool? enabled_;
    SFFloat? gain_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isPaused_;
    SFTime? maxDelayTime_;
    SFNode? metadata_;
    SFTime? pauseTime_;
    SFTime? resumeTime_;
    SFTime? startTime_;
    SFTime? stopTime_;
    SFTime? tailTime_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Delay({this.channelCount_, this.channelCountMode_, this.channelInterpretation_, this.children_, this.delayTime_, this.description_, this.elapsedTime_, this.enabled_, this.gain_, this.IS_, this.isActive_, this.isPaused_, this.maxDelayTime_, this.metadata_, this.pauseTime_, this.resumeTime_, this.startTime_, this.stopTime_, this.tailTime_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ShaderPart extends X3DNode implements X3DUrlObject {
    SFTime? autoRefresh_;
    SFTime? autoRefreshTimeLimit_;
    SFString? description_;
    SFNode? IS_;
    SFBool? load_;
    SFNode? metadata_;
    SFString? type_;
    MFString? url_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ShaderPart({this.autoRefresh_, this.autoRefreshTimeLimit_, this.description_, this.IS_, this.load_, this.metadata_, this.type_, this.url_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class TriangleFanSet extends X3DComposedGeometryNode {
    MFNode? attrib_;
    SFBool? ccw_;
    SFNode? color_;
    SFBool? colorPerVertex_;
    SFNode? coord_;
    MFInt32? fanCount_;
    SFNode? fogCoord_;
    SFNode? IS_;
    SFNode? metadata_;
    SFNode? normal_;
    SFBool? normalPerVertex_;
    SFBool? solid_;
    SFNode? texCoord_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TriangleFanSet({this.attrib_, this.ccw_, this.color_, this.colorPerVertex_, this.coord_, this.fanCount_, this.fogCoord_, this.IS_, this.metadata_, this.normal_, this.normalPerVertex_, this.solid_, this.texCoord_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class EXPORT {
    SFString? AS_;
    SFString? localDEF_;
    EXPORT({this.AS_, this.localDEF_}) {
    }
}

class ComposedVolumeStyle extends X3DComposableVolumeRenderStyleNode {
    SFBool? enabled_;
    SFNode? IS_;
    SFNode? metadata_;
    MFNode? renderStyle_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ComposedVolumeStyle({this.enabled_, this.IS_, this.metadata_, this.renderStyle_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ScalarInterpolator extends X3DInterpolatorNode {
    SFNode? IS_;
    MFFloat? key_;
    MFFloat? keyValue_;
    SFNode? metadata_;
        SFFloat? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ScalarInterpolator({this.IS_, this.key_, this.keyValue_, this.metadata_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MetadataFloat extends X3DNode implements X3DMetadataObject {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? name_;
    SFString? reference_;
    MFFloat? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    MetadataFloat({this.IS_, this.metadata_, this.name_, this.reference_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Polyline2D extends X3DGeometryNode {
    SFNode? IS_;
    MFVec2f? lineSegments_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Polyline2D({this.IS_, this.lineSegments_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class LineProperties extends X3DAppearanceChildNode {
    SFBool? applied_;
    SFNode? IS_;
    SFInt32? linetype_;
    SFFloat? linewidthScaleFactor_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    LineProperties({this.applied_, this.IS_, this.linetype_, this.linewidthScaleFactor_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MFFloat  {
    List<SFFloat>? value_;
    MFFloat(this.value_) {
    }
}

class AcousticProperties extends X3DAppearanceChildNode {
    SFFloat? absorption_;
    SFString? description_;
    SFFloat? diffuse_;
    SFBool? enabled_;
    SFNode? IS_;
    SFNode? metadata_;
    SFFloat? refraction_;
    SFFloat? specular_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    AcousticProperties({this.absorption_, this.description_, this.diffuse_, this.enabled_, this.IS_, this.metadata_, this.refraction_, this.specular_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class VolumeEmitter extends X3DParticleEmitterNode {
    SFNode? coord_;
    MFInt32? coordIndex_;
    SFVec3f? direction_;
    SFBool? internal_;
    SFNode? IS_;
    SFFloat? mass_;
    SFNode? metadata_;
        SFFloat? speed_;
    SFFloat? surfaceArea_;
    SFFloat? variation_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    VolumeEmitter({this.coord_, this.coordIndex_, this.direction_, this.internal_, this.IS_, this.mass_, this.metadata_, this.speed_, this.surfaceArea_, this.variation_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Convolver extends X3DSoundProcessingNode {
    MFFloat? buffer_;
    SFInt32? channelCount_;
    SFString? channelCountMode_;
    SFString? channelInterpretation_;
    List<SFNode>? children_;
    SFString? description_;
    SFTime? elapsedTime_;
    SFBool? enabled_;
    SFFloat? gain_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isPaused_;
    SFNode? metadata_;
    SFBool? normalize_;
    SFTime? pauseTime_;
    SFTime? resumeTime_;
    SFTime? startTime_;
    SFTime? stopTime_;
    SFTime? tailTime_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Convolver({this.buffer_, this.channelCount_, this.channelCountMode_, this.channelInterpretation_, this.children_, this.description_, this.elapsedTime_, this.enabled_, this.gain_, this.IS_, this.isActive_, this.isPaused_, this.metadata_, this.normalize_, this.pauseTime_, this.resumeTime_, this.startTime_, this.stopTime_, this.tailTime_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SplineScalarInterpolator extends X3DInterpolatorNode {
    SFBool? closed_;
    SFNode? IS_;
    MFFloat? key_;
    MFFloat? keyValue_;
    MFFloat? keyVelocity_;
    SFNode? metadata_;
    SFBool? normalizeVelocity_;
        SFFloat? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    SplineScalarInterpolator({this.closed_, this.IS_, this.key_, this.keyValue_, this.keyVelocity_, this.metadata_, this.normalizeVelocity_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ScreenGroup extends X3DGroupingNode {
        SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    List<SFNode>? children_;
    SFNode? IS_;
    SFNode? metadata_;
        SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ScreenGroup({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.children_, this.IS_, this.metadata_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class LayoutLayer extends X3DLayerNode {
        List<SFNode>? children_;
    SFNode? IS_;
    SFNode? layout_;
    SFNode? metadata_;
    MFString? objectType_;
    SFBool? pickable_;
        SFNode? viewport_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    LayoutLayer({this.children_, this.IS_, this.layout_, this.metadata_, this.objectType_, this.pickable_, this.viewport_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class DynamicsCompressor extends X3DSoundProcessingNode {
    SFFloat? attack_;
    SFInt32? channelCount_;
    SFString? channelCountMode_;
    SFString? channelInterpretation_;
    List<SFNode>? children_;
    SFString? description_;
    SFTime? elapsedTime_;
    SFBool? enabled_;
    SFFloat? gain_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isPaused_;
    SFFloat? knee_;
    SFNode? metadata_;
    SFTime? pauseTime_;
    SFFloat? ratio_;
    SFFloat? reduction_;
    SFTime? release_;
    SFTime? resumeTime_;
    SFTime? startTime_;
    SFTime? stopTime_;
    SFTime? tailTime_;
    SFFloat? threshold_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    DynamicsCompressor({this.attack_, this.channelCount_, this.channelCountMode_, this.channelInterpretation_, this.children_, this.description_, this.elapsedTime_, this.enabled_, this.gain_, this.IS_, this.isActive_, this.isPaused_, this.knee_, this.metadata_, this.pauseTime_, this.ratio_, this.reduction_, this.release_, this.resumeTime_, this.startTime_, this.stopTime_, this.tailTime_, this.threshold_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ProtoDeclare {
    SFString? appinfo_;
    SFString? documentation_;
    SFString? name_;
    SFNode? ProtoBody_;
    SFNode? ProtoInterface_;
    ProtoDeclare({this.appinfo_, this.documentation_, this.name_, this.ProtoBody_, this.ProtoInterface_}) {
    }
}

class CADFace extends X3DProductStructureChildNode implements X3DBoundedObject {
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? name_;
    SFNode? shape_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    CADFace({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.IS_, this.metadata_, this.name_, this.shape_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ProgramShader extends X3DShaderNode {
    SFBool? activate_;
    SFNode? IS_;
    SFBool? isSelected_;
    SFBool? isValid_;
    SFString? language_;
    SFNode? metadata_;
    MFNode? programs_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ProgramShader({this.activate_, this.IS_, this.isSelected_, this.isValid_, this.language_, this.metadata_, this.programs_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class CollisionCollection extends X3DChildNode implements X3DBoundedObject {
    MFString? appliedParameters_;
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFFloat? bounce_;
    MFNode? collidables_;
    SFBool? enabled_;
    SFVec2f? frictionCoefficients_;
    SFNode? IS_;
    SFNode? metadata_;
    SFFloat? minBounceSpeed_;
    SFVec2f? slipFactors_;
    SFFloat? softnessConstantForceMix_;
    SFFloat? softnessErrorCorrection_;
    SFVec2f? surfaceSpeed_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    CollisionCollection({this.appliedParameters_, this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.bounce_, this.collidables_, this.enabled_, this.frictionCoefficients_, this.IS_, this.metadata_, this.minBounceSpeed_, this.slipFactors_, this.softnessConstantForceMix_, this.softnessErrorCorrection_, this.surfaceSpeed_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class X3D extends SFNode {
    head? head_;
    SFString? profile_;
    Scene? Scene_;
    SFString? version_;
    X3D({this.head_, this.profile_, this.Scene_, this.version_}) {
    }
}

class ReceiverPdu extends X3DNetworkSensorNode implements X3DBoundedObject {
    SFString? address_;
    SFInt32? applicationID_;
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFBool? enabled_;
    SFInt32? entityID_;
    SFVec3d? geoCoords_;
    MFString? geoSystem_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isNetworkReader_;
    SFBool? isNetworkWriter_;
    SFBool? isRtpHeaderHeard_;
    SFBool? isStandAlone_;
    SFNode? metadata_;
    SFString? multicastRelayHost_;
    SFInt32? multicastRelayPort_;
    SFString? networkMode_;
    SFInt32? port_;
    SFInt32? radioID_;
    SFTime? readInterval_;
    SFFloat? receivedPower_;
    SFInt32? receiverState_;
    SFBool? rtpHeaderExpected_;
    SFInt32? siteID_;
    SFTime? timestamp_;
    SFInt32? transmitterApplicationID_;
    SFInt32? transmitterEntityID_;
    SFInt32? transmitterRadioID_;
    SFInt32? transmitterSiteID_;
    SFBool? visible_;
    SFInt32? whichGeometry_;
    SFTime? writeInterval_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ReceiverPdu({this.address_, this.applicationID_, this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.enabled_, this.entityID_, this.geoCoords_, this.geoSystem_, this.IS_, this.isActive_, this.isNetworkReader_, this.isNetworkWriter_, this.isRtpHeaderHeard_, this.isStandAlone_, this.metadata_, this.multicastRelayHost_, this.multicastRelayPort_, this.networkMode_, this.port_, this.radioID_, this.readInterval_, this.receivedPower_, this.receiverState_, this.rtpHeaderExpected_, this.siteID_, this.timestamp_, this.transmitterApplicationID_, this.transmitterEntityID_, this.transmitterRadioID_, this.transmitterSiteID_, this.visible_, this.whichGeometry_, this.writeInterval_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class NormalInterpolator extends X3DInterpolatorNode {
    SFNode? IS_;
    MFFloat? key_;
    MFVec3f? keyValue_;
    SFNode? metadata_;
        MFVec3f? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    NormalInterpolator({this.IS_, this.key_, this.keyValue_, this.metadata_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class HAnimSite extends X3DGroupingNode {
        SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFVec3f? center_;
    List<SFNode>? children_;
    SFString? description_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? name_;
        SFRotation? rotation_;
    SFVec3f? scale_;
    SFRotation? scaleOrientation_;
    SFVec3f? translation_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    HAnimSite({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.center_, this.children_, this.description_, this.IS_, this.metadata_, this.name_, this.rotation_, this.scale_, this.scaleOrientation_, this.translation_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ScalarChaser extends X3DChaserNode {
    SFTime? duration_;
    SFFloat? initialDestination_;
    SFFloat? initialValue_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
            SFFloat? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ScalarChaser({this.duration_, this.initialDestination_, this.initialValue_, this.IS_, this.isActive_, this.metadata_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Background extends X3DBackgroundNode {
    MFString? backUrl_;
    SFTime? bindTime_;
    MFString? bottomUrl_;
    MFString? frontUrl_;
    MFFloat? groundAngle_;
    MFColor? groundColor_;
    SFNode? IS_;
    SFBool? isBound_;
    MFString? leftUrl_;
    SFNode? metadata_;
    MFString? rightUrl_;
        MFFloat? skyAngle_;
    MFColor? skyColor_;
    MFString? topUrl_;
    SFFloat? transparency_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Background({this.backUrl_, this.bindTime_, this.bottomUrl_, this.frontUrl_, this.groundAngle_, this.groundColor_, this.IS_, this.isBound_, this.leftUrl_, this.metadata_, this.rightUrl_, this.skyAngle_, this.skyColor_, this.topUrl_, this.transparency_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SFColor {
    List<SFDouble>? value_;
    SFColor(this.value_) {
    }
}

class Layer extends X3DLayerNode {
        List<SFNode>? children_;
    SFNode? IS_;
    SFNode? metadata_;
    MFString? objectType_;
    SFBool? pickable_;
        SFNode? viewport_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Layer({this.children_, this.IS_, this.metadata_, this.objectType_, this.pickable_, this.viewport_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class HAnimMotion extends X3DChildNode {
    MFString? channels_;
    MFBool? channelsEnabled_;
    SFTime? cycleTime_;
    SFString? description_;
    SFTime? elapsedTime_;
    SFBool? enabled_;
    SFInt32? endFrame_;
    SFInt32? frameCount_;
    SFTime? frameDuration_;
    SFInt32? frameIncrement_;
    SFInt32? frameIndex_;
    SFNode? IS_;
    MFString? joints_;
    SFInt32? loa_;
    SFBool? loop_;
    SFNode? metadata_;
    SFInt32? startFrame_;
    MFFloat? values_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    HAnimMotion({this.channels_, this.channelsEnabled_, this.cycleTime_, this.description_, this.elapsedTime_, this.enabled_, this.endFrame_, this.frameCount_, this.frameDuration_, this.frameIncrement_, this.frameIndex_, this.IS_, this.joints_, this.loa_, this.loop_, this.metadata_, this.startFrame_, this.values_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class PixelTexture3D extends X3DTexture3DNode {
    SFString? description_;
    MFInt32? image_;
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? repeatR_;
    SFBool? repeatS_;
    SFBool? repeatT_;
    SFNode? textureProperties_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    PixelTexture3D({this.description_, this.image_, this.IS_, this.metadata_, this.repeatR_, this.repeatS_, this.repeatT_, this.textureProperties_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class OpacityMapVolumeStyle extends X3DComposableVolumeRenderStyleNode {
    SFBool? enabled_;
    SFNode? IS_;
    SFNode? metadata_;
    SFNode? transferFunction_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    OpacityMapVolumeStyle({this.enabled_, this.IS_, this.metadata_, this.transferFunction_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ViewpointGroup extends X3DChildNode {
    SFVec3f? center_;
    List<SFNode>? children_;
    SFString? description_;
    SFBool? displayed_;
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? retainUserOffsets_;
    SFVec3f? size_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ViewpointGroup({this.center_, this.children_, this.description_, this.displayed_, this.IS_, this.metadata_, this.retainUserOffsets_, this.size_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class TriangleSet2D extends X3DGeometryNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? solid_;
    MFVec2f? vertices_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TriangleSet2D({this.IS_, this.metadata_, this.solid_, this.vertices_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SpatialSound extends X3DSoundNode {
    List<SFNode>? children_;
    SFFloat? coneInnerAngle_;
    SFFloat? coneOuterAngle_;
    SFFloat? coneOuterGain_;
    SFString? description_;
    SFVec3f? direction_;
    SFString? distanceModel_;
    SFBool? enabled_;
    SFBool? enableDoppler_;
    SFBool? enableHRTF_;
    SFFloat? gain_;
    SFFloat? intensity_;
    SFNode? IS_;
    SFVec3f? location_;
    SFFloat? maxDistance_;
    SFNode? metadata_;
    SFFloat? priority_;
    SFFloat? referenceDistance_;
    SFFloat? rolloffFactor_;
    SFBool? spatialize_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    SpatialSound({this.children_, this.coneInnerAngle_, this.coneOuterAngle_, this.coneOuterGain_, this.description_, this.direction_, this.distanceModel_, this.enabled_, this.enableDoppler_, this.enableHRTF_, this.gain_, this.intensity_, this.IS_, this.location_, this.maxDistance_, this.metadata_, this.priority_, this.referenceDistance_, this.rolloffFactor_, this.spatialize_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ImageTexture extends X3DTexture2DNode implements X3DUrlObject {
    SFTime? autoRefresh_;
    SFTime? autoRefreshTimeLimit_;
    SFString? description_;
    SFNode? IS_;
    SFBool? load_;
    SFNode? metadata_;
    SFBool? repeatS_;
    SFBool? repeatT_;
    SFNode? textureProperties_;
    MFString? url_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ImageTexture({this.autoRefresh_, this.autoRefreshTimeLimit_, this.description_, this.IS_, this.load_, this.metadata_, this.repeatS_, this.repeatT_, this.textureProperties_, this.url_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ConeEmitter extends X3DParticleEmitterNode {
    SFFloat? angle_;
    SFVec3f? direction_;
    SFNode? IS_;
    SFFloat? mass_;
    SFNode? metadata_;
    SFVec3f? position_;
    SFFloat? speed_;
    SFFloat? surfaceArea_;
    SFFloat? variation_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ConeEmitter({this.angle_, this.direction_, this.IS_, this.mass_, this.metadata_, this.position_, this.speed_, this.surfaceArea_, this.variation_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class AudioClip extends X3DSoundSourceNode implements X3DUrlObject {
    SFTime? autoRefresh_;
    SFTime? autoRefreshTimeLimit_;
    SFString? description_;
    SFTime? duration_;
    SFTime? elapsedTime_;
    SFBool? enabled_;
    SFFloat? gain_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isPaused_;
    SFBool? load_;
    SFBool? loop_;
    SFNode? metadata_;
    SFTime? pauseTime_;
    SFFloat? pitch_;
    SFTime? resumeTime_;
    SFTime? startTime_;
    SFTime? stopTime_;
    MFString? url_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    AudioClip({this.autoRefresh_, this.autoRefreshTimeLimit_, this.description_, this.duration_, this.elapsedTime_, this.enabled_, this.gain_, this.IS_, this.isActive_, this.isPaused_, this.load_, this.loop_, this.metadata_, this.pauseTime_, this.pitch_, this.resumeTime_, this.startTime_, this.stopTime_, this.url_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MFVec4f  {
    List<SFVec4f>? value_;
    MFVec4f(this.value_) {
    }
}

class MFVec4d  {
    List<SFVec4d>? value_;
    MFVec4d(this.value_) {
    }
}

class ComposedCubeMapTexture extends X3DEnvironmentTextureNode {
    SFNode? backTexture_;
    SFNode? bottomTexture_;
    SFString? description_;
    SFNode? frontTexture_;
    SFNode? IS_;
    SFNode? leftTexture_;
    SFNode? metadata_;
    SFNode? rightTexture_;
    SFNode? topTexture_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ComposedCubeMapTexture({this.backTexture_, this.bottomTexture_, this.description_, this.frontTexture_, this.IS_, this.leftTexture_, this.metadata_, this.rightTexture_, this.topTexture_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SFRotation {
    List<SFDouble>? value_;
    SFRotation(this.value_) {
    }
}

class IsoSurfaceVolumeData extends X3DVolumeDataNode {
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFFloat? contourStepSize_;
    SFVec3f? dimensions_;
    SFNode? gradients_;
    SFNode? IS_;
    SFNode? metadata_;
    MFNode? renderStyle_;
    SFFloat? surfaceTolerance_;
    MFFloat? surfaceValues_;
    SFBool? visible_;
    SFNode? voxels_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    IsoSurfaceVolumeData({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.contourStepSize_, this.dimensions_, this.gradients_, this.IS_, this.metadata_, this.renderStyle_, this.surfaceTolerance_, this.surfaceValues_, this.visible_, this.voxels_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MFImage  {
    List<SFImage>? value_;
    MFImage(this.value_) {
    }
}

class ExternProtoDeclare {
    SFString? appinfo_;
    SFString? documentation_;
    MFNode? field_;
    SFString? name_;
    MFString? url_;
    ExternProtoDeclare({this.appinfo_, this.documentation_, this.field_, this.name_, this.url_}) {
    }
}

class Box extends X3DGeometryNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFVec3f? size_;
    SFBool? solid_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Box({this.IS_, this.metadata_, this.size_, this.solid_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SFFloat {
    double? value_;
    SFFloat(this.value_) {
    }
}

class IndexedLineSet extends X3DGeometryNode {
    MFNode? attrib_;
    SFNode? color_;
    MFInt32? colorIndex_;
    SFBool? colorPerVertex_;
    SFNode? coord_;
    MFInt32? coordIndex_;
    SFNode? fogCoord_;
    SFNode? IS_;
    SFNode? metadata_;
    SFNode? normal_;
            SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    IndexedLineSet({this.attrib_, this.color_, this.colorIndex_, this.colorPerVertex_, this.coord_, this.coordIndex_, this.fogCoord_, this.IS_, this.metadata_, this.normal_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class TransmitterPdu extends X3DNetworkSensorNode implements X3DBoundedObject {
    SFString? address_;
    SFVec3f? antennaLocation_;
    SFInt32? antennaPatternLength_;
    SFInt32? antennaPatternType_;
    SFInt32? applicationID_;
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFInt32? cryptoKeyID_;
    SFInt32? cryptoSystem_;
    SFBool? enabled_;
    SFInt32? entityID_;
    SFInt32? frequency_;
    SFVec3d? geoCoords_;
    MFString? geoSystem_;
    SFInt32? inputSource_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isNetworkReader_;
    SFBool? isNetworkWriter_;
    SFBool? isRtpHeaderHeard_;
    SFBool? isStandAlone_;
    SFInt32? lengthOfModulationParameters_;
    SFNode? metadata_;
    SFInt32? modulationTypeDetail_;
    SFInt32? modulationTypeMajor_;
    SFInt32? modulationTypeSpreadSpectrum_;
    SFInt32? modulationTypeSystem_;
    SFString? multicastRelayHost_;
    SFInt32? multicastRelayPort_;
    SFString? networkMode_;
    SFInt32? port_;
    SFFloat? power_;
    SFInt32? radioEntityTypeCategory_;
    SFInt32? radioEntityTypeCountry_;
    SFInt32? radioEntityTypeDomain_;
    SFInt32? radioEntityTypeKind_;
    SFInt32? radioEntityTypeNomenclature_;
    SFInt32? radioEntityTypeNomenclatureVersion_;
    SFInt32? radioID_;
    SFTime? readInterval_;
    SFVec3f? relativeAntennaLocation_;
    SFBool? rtpHeaderExpected_;
    SFInt32? siteID_;
    SFTime? timestamp_;
    SFFloat? transmitFrequencyBandwidth_;
    SFInt32? transmitState_;
    SFBool? visible_;
    SFInt32? whichGeometry_;
    SFTime? writeInterval_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TransmitterPdu({this.address_, this.antennaLocation_, this.antennaPatternLength_, this.antennaPatternType_, this.applicationID_, this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.cryptoKeyID_, this.cryptoSystem_, this.enabled_, this.entityID_, this.frequency_, this.geoCoords_, this.geoSystem_, this.inputSource_, this.IS_, this.isActive_, this.isNetworkReader_, this.isNetworkWriter_, this.isRtpHeaderHeard_, this.isStandAlone_, this.lengthOfModulationParameters_, this.metadata_, this.modulationTypeDetail_, this.modulationTypeMajor_, this.modulationTypeSpreadSpectrum_, this.modulationTypeSystem_, this.multicastRelayHost_, this.multicastRelayPort_, this.networkMode_, this.port_, this.power_, this.radioEntityTypeCategory_, this.radioEntityTypeCountry_, this.radioEntityTypeDomain_, this.radioEntityTypeKind_, this.radioEntityTypeNomenclature_, this.radioEntityTypeNomenclatureVersion_, this.radioID_, this.readInterval_, this.relativeAntennaLocation_, this.rtpHeaderExpected_, this.siteID_, this.timestamp_, this.transmitFrequencyBandwidth_, this.transmitState_, this.visible_, this.whichGeometry_, this.writeInterval_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class OscillatorSource extends X3DSoundSourceNode {
    List<SFNode>? children_;
    SFString? description_;
    SFFloat? detune_;
    SFTime? elapsedTime_;
    SFBool? enabled_;
    SFFloat? frequency_;
    SFFloat? gain_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isPaused_;
    SFNode? metadata_;
    SFTime? pauseTime_;
    SFTime? resumeTime_;
    SFTime? startTime_;
    SFTime? stopTime_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    OscillatorSource({this.children_, this.description_, this.detune_, this.elapsedTime_, this.enabled_, this.frequency_, this.gain_, this.IS_, this.isActive_, this.isPaused_, this.metadata_, this.pauseTime_, this.resumeTime_, this.startTime_, this.stopTime_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class fieldValue {
    List<SFNode>? children_;
    SFString? name_;
    SFString? value_;
    fieldValue({this.children_, this.name_, this.value_}) {
    }
}

class ROUTE {
    SFString? fromField_;
    SFString? fromNode_;
    SFString? toField_;
    SFString? toNode_;
    ROUTE({this.fromField_, this.fromNode_, this.toField_, this.toNode_}) {
    }
}

class TextureTransform extends X3DTextureTransformNode {
    SFVec2f? center_;
    SFNode? IS_;
    SFNode? metadata_;
    SFFloat? rotation_;
    SFVec2f? scale_;
    SFVec2f? translation_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TextureTransform({this.center_, this.IS_, this.metadata_, this.rotation_, this.scale_, this.translation_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MetadataDouble extends X3DNode implements X3DMetadataObject {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? name_;
    SFString? reference_;
    MFDouble? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    MetadataDouble({this.IS_, this.metadata_, this.name_, this.reference_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class TransformSensor extends X3DEnvironmentalSensorNode {
    SFVec3f? center_;
    SFBool? enabled_;
    SFTime? enterTime_;
    SFTime? exitTime_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
    SFRotation? orientation_;
    SFVec3f? position_;
    SFVec3f? size_;
    SFNode? targetObject_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    TransformSensor({this.center_, this.enabled_, this.enterTime_, this.exitTime_, this.IS_, this.isActive_, this.metadata_, this.orientation_, this.position_, this.size_, this.targetObject_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class OrientationInterpolator extends X3DInterpolatorNode {
    SFNode? IS_;
    MFFloat? key_;
    MFRotation? keyValue_;
    SFNode? metadata_;
        SFRotation? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    OrientationInterpolator({this.IS_, this.key_, this.keyValue_, this.metadata_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Normal extends X3DNormalNode {
    SFNode? IS_;
    SFNode? metadata_;
    MFVec3f? vector_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Normal({this.IS_, this.metadata_, this.vector_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SquadOrientationInterpolator extends X3DInterpolatorNode {
    SFNode? IS_;
    MFFloat? key_;
    MFRotation? keyValue_;
    SFNode? metadata_;
    SFBool? normalizeVelocity_;
        SFRotation? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    SquadOrientationInterpolator({this.IS_, this.key_, this.keyValue_, this.metadata_, this.normalizeVelocity_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class GeoMetadata extends X3DInfoNode implements X3DUrlObject {
    SFTime? autoRefresh_;
    SFTime? autoRefreshTimeLimit_;
    MFNode? data_;
    SFString? description_;
    SFNode? IS_;
    SFBool? load_;
    SFNode? metadata_;
    MFString? summary_;
    MFString? url_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    GeoMetadata({this.autoRefresh_, this.autoRefreshTimeLimit_, this.data_, this.description_, this.IS_, this.load_, this.metadata_, this.summary_, this.url_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ToneMappedVolumeStyle extends X3DComposableVolumeRenderStyleNode {
    SFColorRGBA? coolColor_;
    SFBool? enabled_;
    SFNode? IS_;
    SFNode? metadata_;
    SFNode? surfaceNormals_;
    SFColorRGBA? warmColor_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ToneMappedVolumeStyle({this.coolColor_, this.enabled_, this.IS_, this.metadata_, this.surfaceNormals_, this.warmColor_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class DISEntityTypeMapping extends X3DInfoNode implements X3DUrlObject {
    SFTime? autoRefresh_;
    SFTime? autoRefreshTimeLimit_;
    SFInt32? category_;
    SFInt32? country_;
    SFString? description_;
    SFInt32? domain_;
    SFInt32? extra_;
    SFNode? IS_;
    SFInt32? kind_;
    SFBool? load_;
    SFNode? metadata_;
    SFInt32? specific_;
    SFInt32? subcategory_;
    MFString? url_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    DISEntityTypeMapping({this.autoRefresh_, this.autoRefreshTimeLimit_, this.category_, this.country_, this.description_, this.domain_, this.extra_, this.IS_, this.kind_, this.load_, this.metadata_, this.specific_, this.subcategory_, this.url_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class NavigationInfo extends X3DBindableNode {
    MFFloat? avatarSize_;
    SFTime? bindTime_;
    SFBool? headlight_;
    SFNode? IS_;
    SFBool? isBound_;
    SFNode? metadata_;
        SFFloat? speed_;
    SFBool? transitionComplete_;
    SFTime? transitionTime_;
    MFString? transitionType_;
    MFString? type_;
    SFFloat? visibilityLimit_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    NavigationInfo({this.avatarSize_, this.bindTime_, this.headlight_, this.IS_, this.isBound_, this.metadata_, this.speed_, this.transitionComplete_, this.transitionTime_, this.transitionType_, this.type_, this.visibilityLimit_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ClipPlane extends X3DChildNode {
    SFBool? enabled_;
    SFNode? IS_;
    SFNode? metadata_;
    SFVec4f? plane_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ClipPlane({this.enabled_, this.IS_, this.metadata_, this.plane_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class head {
    MFNode? component_;
    List<meta>? meta_;
    MFNode? unit_;
    head({this.component_, this.meta_, this.unit_}) {
    }
}

class GeoTouchSensor extends X3DTouchSensorNode {
    SFString? description_;
    SFBool? enabled_;
    SFNode? geoOrigin_;
    MFString? geoSystem_;
    SFVec3d? hitGeoCoord_;
    SFVec3f? hitNormal_;
    SFVec3f? hitPoint_;
    SFVec2f? hitTexCoord_;
    SFNode? IS_;
    SFBool? isActive_;
    SFBool? isOver_;
    SFNode? metadata_;
    SFTime? touchTime_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    GeoTouchSensor({this.description_, this.enabled_, this.geoOrigin_, this.geoSystem_, this.hitGeoCoord_, this.hitNormal_, this.hitPoint_, this.hitTexCoord_, this.IS_, this.isActive_, this.isOver_, this.metadata_, this.touchTime_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class PeriodicWave extends X3DSoundNode {
    SFString? description_;
    SFBool? enabled_;
    SFNode? IS_;
    SFNode? metadata_;
    MFFloat? optionsImag_;
    MFFloat? optionsReal_;
    SFString? type_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    PeriodicWave({this.description_, this.enabled_, this.IS_, this.metadata_, this.optionsImag_, this.optionsReal_, this.type_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SFNode {
    SFNode() {
    }
}

class Color extends X3DColorNode {
    MFColor? color_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Color({this.color_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Billboard extends X3DGroupingNode {
        SFVec3f? axisOfRotation_;
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    List<SFNode>? children_;
    SFNode? IS_;
    SFNode? metadata_;
        SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Billboard({this.axisOfRotation_, this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.children_, this.IS_, this.metadata_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class LayerSet extends X3DNode {
    SFInt32? activeLayer_;
    SFNode? IS_;
    MFNode? layers_;
    SFNode? metadata_;
    MFInt32? order_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    LayerSet({this.activeLayer_, this.IS_, this.layers_, this.metadata_, this.order_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class BoundedPhysicsModel extends X3DParticlePhysicsModelNode {
    SFBool? enabled_;
    X3DGeometryNode? geometry_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    BoundedPhysicsModel({this.enabled_, this.geometry_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class connect {
    SFString? nodeField_;
    SFString? protoField_;
    connect({this.nodeField_, this.protoField_}) {
    }
}

class X3DLayoutNode extends X3DChildNode {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    X3DLayoutNode({this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Layout extends X3DLayoutNode {
    MFString? align_;
    SFNode? IS_;
    SFNode? metadata_;
    MFFloat? offset_;
    MFString? offsetUnits_;
    MFString? scaleMode_;
    MFFloat? size_;
    MFString? sizeUnits_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Layout({this.align_, this.IS_, this.metadata_, this.offset_, this.offsetUnits_, this.scaleMode_, this.size_, this.sizeUnits_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class BooleanTrigger extends X3DTriggerNode {
    SFNode? IS_;
    SFNode? metadata_;
        SFBool? triggerTrue_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    BooleanTrigger({this.IS_, this.metadata_, this.triggerTrue_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class GeoLOD extends X3DChildNode implements X3DBoundedObject {
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    SFVec3d? center_;
    MFString? child1Url_;
    MFString? child2Url_;
    MFString? child3Url_;
    MFString? child4Url_;
    List<SFNode>? children_;
    SFNode? geoOrigin_;
    MFString? geoSystem_;
    SFNode? IS_;
    SFInt32? level_;
    SFNode? metadata_;
    SFFloat? range_;
    MFNode? rootNode_;
    MFString? rootUrl_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    GeoLOD({this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.center_, this.child1Url_, this.child2Url_, this.child3Url_, this.child4Url_, this.children_, this.geoOrigin_, this.geoSystem_, this.IS_, this.level_, this.metadata_, this.range_, this.rootNode_, this.rootUrl_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class HAnimDisplacer extends X3DGeometricPropertyNode {
    MFInt32? coordIndex_;
    SFString? description_;
    MFVec3f? displacements_;
    SFNode? IS_;
    SFNode? metadata_;
    SFString? name_;
    SFFloat? weight_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    HAnimDisplacer({this.coordIndex_, this.description_, this.displacements_, this.IS_, this.metadata_, this.name_, this.weight_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ScalarDamper extends X3DDamperNode {
    SFFloat? initialDestination_;
    SFFloat? initialValue_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
    SFInt32? order_;
            SFTime? tau_;
    SFFloat? tolerance_;
    SFFloat? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ScalarDamper({this.initialDestination_, this.initialValue_, this.IS_, this.isActive_, this.metadata_, this.order_, this.tau_, this.tolerance_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class PositionChaser extends X3DChaserNode {
    SFTime? duration_;
    SFVec3f? initialDestination_;
    SFVec3f? initialValue_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
            SFVec3f? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    PositionChaser({this.duration_, this.initialDestination_, this.initialValue_, this.IS_, this.isActive_, this.metadata_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class field {
    SFString? accessType_;
    SFString? appinfo_;
    List<SFNode>? children_;
    SFString? documentation_;
    SFString? name_;
    SFString? type_;
    SFString? value_;
    field({this.accessType_, this.appinfo_, this.children_, this.documentation_, this.name_, this.type_, this.value_}) {
    }
}

class GeoPositionInterpolator extends X3DInterpolatorNode {
    SFNode? geoOrigin_;
    MFString? geoSystem_;
    SFVec3d? geovalue_;
    SFNode? IS_;
    MFFloat? key_;
    MFVec3d? keyValue_;
    SFNode? metadata_;
        SFVec3f? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    GeoPositionInterpolator({this.geoOrigin_, this.geoSystem_, this.geovalue_, this.IS_, this.key_, this.keyValue_, this.metadata_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class DISEntityManager extends X3DChildNode {
    MFNode? ENTities_;
    SFString? address_;
    SFInt32? applicationID_;
    List<SFNode>? children_;
    SFNode? IS_;
    SFNode? metadata_;
    SFInt32? port_;
        SFInt32? siteID_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    DISEntityManager({this.ENTities_, this.address_, this.applicationID_, this.children_, this.IS_, this.metadata_, this.port_, this.siteID_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class PositionChaser2D extends X3DChaserNode {
    SFTime? duration_;
    SFVec2f? initialDestination_;
    SFVec2f? initialValue_;
    SFNode? IS_;
    SFBool? isActive_;
    SFNode? metadata_;
            SFVec2f? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    PositionChaser2D({this.duration_, this.initialDestination_, this.initialValue_, this.IS_, this.isActive_, this.metadata_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class ImageCubeMapTexture extends X3DEnvironmentTextureNode implements X3DUrlObject {
    SFTime? autoRefresh_;
    SFTime? autoRefreshTimeLimit_;
    SFString? description_;
    SFNode? IS_;
    SFBool? load_;
    SFNode? metadata_;
    SFNode? textureProperties_;
    MFString? url_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    ImageCubeMapTexture({this.autoRefresh_, this.autoRefreshTimeLimit_, this.description_, this.IS_, this.load_, this.metadata_, this.textureProperties_, this.url_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class DirectionalLight extends X3DLightNode {
    SFFloat? ambientIntensity_;
    SFColor? color_;
    SFVec3f? direction_;
    SFBool? global_;
    SFFloat? intensity_;
    SFNode? IS_;
    SFNode? metadata_;
    SFBool? on_;
    SFFloat? shadowIntensity_;
    SFBool? shadows_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    DirectionalLight({this.ambientIntensity_, this.color_, this.direction_, this.global_, this.intensity_, this.IS_, this.metadata_, this.on_, this.shadowIntensity_, this.shadows_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class Contour2D extends X3DNode {
        List<SFNode>? children_;
    SFNode? IS_;
    SFNode? metadata_;
        SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    Contour2D({this.children_, this.IS_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class StreamAudioDestination extends X3DSoundDestinationNode {
    SFInt32? channelCount_;
    SFString? channelCountMode_;
    SFString? channelInterpretation_;
    List<SFNode>? children_;
    SFString? description_;
    SFBool? enabled_;
    SFFloat? gain_;
    SFNode? IS_;
    SFBool? isActive_;
    SFString? mediaDeviceID_;
    SFNode? metadata_;
    SFString? streamIdentifier_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    StreamAudioDestination({this.channelCount_, this.channelCountMode_, this.channelInterpretation_, this.children_, this.description_, this.enabled_, this.gain_, this.IS_, this.isActive_, this.mediaDeviceID_, this.metadata_, this.streamIdentifier_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class NurbsSet extends X3DChildNode implements X3DBoundedObject {
    MFNode? Geometry_;
    SFVec3f? bboxCenter_;
    SFBool? bboxDisplay_;
    SFVec3f? bboxSize_;
    X3DGeometryNode? geometry_;
    SFNode? IS_;
    SFNode? metadata_;
        SFFloat? tessellationScale_;
    SFBool? visible_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    NurbsSet({this.Geometry_, this.bboxCenter_, this.bboxDisplay_, this.bboxSize_, this.geometry_, this.IS_, this.metadata_, this.tessellationScale_, this.visible_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MetadataInteger extends X3DNode implements X3DMetadataObject {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? name_;
    SFString? reference_;
    MFInt32? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    MetadataInteger({this.IS_, this.metadata_, this.name_, this.reference_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class MetadataBoolean extends X3DNode implements X3DMetadataObject {
    SFNode? IS_;
    SFNode? metadata_;
    SFString? name_;
    SFString? reference_;
    MFBool? value_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    MetadataBoolean({this.IS_, this.metadata_, this.name_, this.reference_, this.value_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class GeoElevationGrid extends X3DGeometryNode {
    SFBool? ccw_;
    SFNode? color_;
    SFBool? colorPerVertex_;
    SFDouble? creaseAngle_;
    SFVec3d? geoGridOrigin_;
    SFNode? geoOrigin_;
    MFString? geoSystem_;
    MFDouble? height_;
    SFNode? IS_;
    SFNode? metadata_;
    SFNode? normal_;
    SFBool? normalPerVertex_;
        SFBool? solid_;
    SFNode? texCoord_;
    SFInt32? xDimension_;
    SFDouble? xSpacing_;
    SFFloat? yScale_;
    SFInt32? zDimension_;
    SFDouble? zSpacing_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    GeoElevationGrid({this.ccw_, this.color_, this.colorPerVertex_, this.creaseAngle_, this.geoGridOrigin_, this.geoOrigin_, this.geoSystem_, this.height_, this.IS_, this.metadata_, this.normal_, this.normalPerVertex_, this.solid_, this.texCoord_, this.xDimension_, this.xSpacing_, this.yScale_, this.zDimension_, this.zSpacing_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class AudioDestination extends X3DSoundDestinationNode {
    SFInt32? channelCount_;
    SFString? channelCountMode_;
    SFString? channelInterpretation_;
    List<SFNode>? children_;
    SFString? description_;
    SFBool? enabled_;
    SFFloat? gain_;
    SFNode? IS_;
    SFBool? isActive_;
    SFInt32? maxChannelCount_;
    SFString? mediaDeviceID_;
    SFNode? metadata_;
    SFString? DEF_;
    SFString? USE_;
    SFString? class_;
    SFString? id_;
    SFString? style_;
    AudioDestination({this.channelCount_, this.channelCountMode_, this.channelInterpretation_, this.children_, this.description_, this.enabled_, this.gain_, this.IS_, this.isActive_, this.maxChannelCount_, this.mediaDeviceID_, this.metadata_, this.DEF_, this.USE_, this.class_, this.id_, this.style_}) {
    }
}

class SFVec2f {
    List<SFDouble>? value_;
    SFVec2f(this.value_) {
    }
}

class SFVec2d {
    List<SFDouble>? value_;
    SFVec2d(this.value_) {
    }
}

