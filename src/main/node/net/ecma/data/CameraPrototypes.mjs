'use strict';
import fs from 'fs';
import { X3D } from './x3d.mjs';
import { SFString } from './x3d.mjs';
import { SFNode } from './x3d.mjs';
import { head } from './x3d.mjs';
import { MFNode } from './x3d.mjs';
import { meta } from './x3d.mjs';
import { Scene } from './x3d.mjs';
import { CommentsBlock } from './x3d.mjs';
import { ProtoDeclare } from './x3d.mjs';
import { ProtoInterface } from './x3d.mjs';
import { field } from './x3d.mjs';
import { ProtoBody } from './x3d.mjs';
import { Viewpoint } from './x3d.mjs';
import { IS } from './x3d.mjs';
import { connect } from './x3d.mjs';
import { NavigationInfo } from './x3d.mjs';
import { DirectionalLight } from './x3d.mjs';
import { SFBool } from './x3d.mjs';
import { PositionInterpolator } from './x3d.mjs';
import { MFFloat } from './x3d.mjs';
import { MFVec3f } from './x3d.mjs';
import { OrientationInterpolator } from './x3d.mjs';
import { MFRotation } from './x3d.mjs';
import { ROUTE } from './x3d.mjs';
import { Script } from './x3d.mjs';
import { Background } from './x3d.mjs';
import { MFColor } from './x3d.mjs';
import { Anchor } from './x3d.mjs';
import { MFString } from './x3d.mjs';
import { Transform } from './x3d.mjs';
import { Shape } from './x3d.mjs';
import { Text } from './x3d.mjs';
import { FontStyle } from './x3d.mjs';
import { Appearance } from './x3d.mjs';
import { Material } from './x3d.mjs';
import { SFColor } from './x3d.mjs';
var X3D0 =  new X3D({

      profile : new SFString("Immersive"),
      version : new SFString("3.2"),
      head : new SFNode(
        new head({
          meta : new MFNode([
            new meta({
              name : new SFString("title"),
              content : new SFString("CameraPrototypes.x3d")}),

            new meta({
              name : new SFString("description"),
              content : new SFString("Camera, CameraShot and CameraMovement prototypes that demonstrate storyboard capabilities and precise camera operation. This is a developmental effort for potential X3D Specification improvement.")}),

            new meta({
              name : new SFString("creator"),
              content : new SFString("Don Brutzman and Jeff Weekley")}),

            new meta({
              name : new SFString("created"),
              content : new SFString("16 March 2009")}),

            new meta({
              name : new SFString("modified"),
              content : new SFString("25 October 2016")}),

            new meta({
              name : new SFString("TODO"),
              content : new SFString("Schematron rules, backed up by initialize() checks")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("BeyondViewpointCameraNodesWeb3D2009.pdf")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://www.web3d.org/x3d/specifications/ISO-IEC-FDIS-19775-1.2-X3D-AbstractSpecification/Part01/components/navigation.html")}),

            new meta({
              name : new SFString("subject"),
              content : new SFString("Camera nodes for Viewpoint navigation control")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("CameraExamples.x3d")}),

            new meta({
              name : new SFString("identifier"),
              content : new SFString("http://www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d")}),

            new meta({
              name : new SFString("reference"),
              content : new SFString("http://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/Basic/development/CameraPrototypes.x3d")}),

            new meta({
              name : new SFString("generator"),
              content : new SFString("X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit")}),

            new meta({
              name : new SFString("license"),
              content : new SFString("../license.html")})])})),
      Scene : new SFNode(
        new Scene({
          { "#comment" : new CommentsBlock("=============== Camera ==============") },
          children : new MFNode([
            new ProtoDeclare({
              name : new SFString("Camera"),
              appinfo : new SFString("Camera node provides direct control of scene view to enable cinematic camera animation shot by shot and move by move along with still digital-photography settings for offline rendering of camera images."),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  { "#comment" : new CommentsBlock("Viewpoint-related fields, NavigationInfo-related fields and Camera-unique fields") },
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFSTRING,
                      name : new SFString("description"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Text description to be displayed for this Camera")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("position"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Camera position in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"),
                      value : new SFString("0 0 10")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("orientation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Camera rotation in local transformation frame, which is default prior to first CameraShot initialPosition getting activated"),
                      value : new SFString("0 0 1 0")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("fieldOfView"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("pi/4"),
                      value : new SFString("0.7854")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("set_fraction"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                      appinfo : new SFString("input fraction drives interpolators")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("set_bind"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                      appinfo : new SFString("input event binds or unbinds this Camera")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("bindTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      appinfo : new SFString("output event indicates when this Camera is bound")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("isBound"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      appinfo : new SFString("output event indicates whether this Camera is bound or unbound")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("nearClipPlane"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Vector distance to near clipping plane corresponds to NavigationInfo.avatarSize[0]"),
                      value : new SFString("0.25")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("farClipPlane"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Vector distance to far clipping plane corresponds to NavigationInfo.visibilityLimit"),
                      value : new SFString("0")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("shots"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Array of CameraShot nodes which in turn contain CameraMovement nodes"),
                      { "#comment" : new CommentsBlock("initialization nodes (if any) go here") }}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("headlight"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Whether camera headlight is on or off"),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("headlightColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Camera headlight color"),
                      value : new SFString("1 1 1")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("headlightIntensity"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Camera headlight intensity"),
                      value : new SFString("1")}),

                    new field({
                      type : field.TYPE_SFCOLOR,
                      name : new SFString("filterColor"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Camera filter color that modifies virtual lens capture"),
                      value : new SFString("1 1 1")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("filterTransparency"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Camera filter transparency that modifies virtual lens capture"),
                      value : new SFString("1")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("upVector"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("upVector changes modify camera orientation (and possibly vice versa)"),
                      value : new SFString("0 1 0")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("fStop"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Focal length divided effective aperture diameter indicating width of focal plane"),
                      value : new SFString("5.6")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("focusDistance"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Distance to focal plane of sharpest focus"),
                      value : new SFString("10")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("isActive"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      appinfo : new SFString("Mark start/stop with true/false output respectively useful to trigger external animations")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("totalDuration"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      appinfo : new SFString("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations")}),

                    new field({
                      type : field.TYPE_SFNODE,
                      name : new SFString("offlineRender"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("OfflineRender node"),
                      { "#comment" : new CommentsBlock("initialization node (if any) goes here") }}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("traceEnabled"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("enable console output to trace script computations and prototype progress"),
                      value : new SFString("false")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Viewpoint({
                      DEF : new SFString("CameraViewpoint"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("description"),
                              protoField : new SFString("description")}),

                            new connect({
                              nodeField : new SFString("position"),
                              protoField : new SFString("position")}),

                            new connect({
                              nodeField : new SFString("orientation"),
                              protoField : new SFString("orientation")}),

                            new connect({
                              nodeField : new SFString("fieldOfView"),
                              protoField : new SFString("fieldOfView")}),

                            new connect({
                              nodeField : new SFString("set_bind"),
                              protoField : new SFString("set_bind")}),

                            new connect({
                              nodeField : new SFString("bindTime"),
                              protoField : new SFString("bindTime")}),

                            new connect({
                              nodeField : new SFString("isBound"),
                              protoField : new SFString("isBound")})])}))}),
                  { "#comment" : new CommentsBlock("NavInfo EXAMINE used since some browsers (InstantReality) try to lock view to vertical when flying to avoid disorientation") },

                    new NavigationInfo({
                      type : ["EXAMINE","FLY","ANY"],
                      DEF : new SFString("CameraNavInfo"),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("set_bind"),
                              protoField : new SFString("set_bind")}),

                            new connect({
                              nodeField : new SFString("headlight"),
                              protoField : new SFString("headlight")}),

                            new connect({
                              nodeField : new SFString("visibilityLimit"),
                              protoField : new SFString("farClipPlane")}),
                          { "#comment" : new CommentsBlock("No need to bind outputs bindTime, isBound from NavigationInfo since Viewpoint outputs will suffice. TODO inform BitManagement that bindTime field is missing.") }])}))}),
                  { "#comment" : new CommentsBlock("this DirectionalLight replaces NavigationInfo headlight in order to add color capability") },

                    new DirectionalLight({
                      DEF : new SFString("CameraDirectionalLight"),
                      global : new SFBool(true),
                      { "#comment" : new CommentsBlock("TODO confirm other default field values match NavigationInfo spec") },
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("on"),
                              protoField : new SFString("headlight")}),

                            new connect({
                              nodeField : new SFString("color"),
                              protoField : new SFString("headlightColor")}),

                            new connect({
                              nodeField : new SFString("intensity"),
                              protoField : new SFString("headlightIntensity")})])}))}),

                    new PositionInterpolator({
                      DEF : new SFString("CameraPositionInterpolator"),
                      key : new MFFloat([0,1]),
                      keyValue : new MFVec3f([0,0,0,0,0,0]),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("set_fraction"),
                              protoField : new SFString("set_fraction")})])}))}),

                    new OrientationInterpolator({
                      DEF : new SFString("CameraOrientationInterpolator"),
                      key : new MFFloat([0,1]),
                      keyValue : new MFRotation([0,1,0,0,0,1,0,0]),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("set_fraction"),
                              protoField : new SFString("set_fraction")})])}))}),

                    new ROUTE({
                      fromField : new SFString("value_changed"),
                      fromNode : new SFString("CameraPositionInterpolator"),
                      toField : new SFString("position"),
                      toNode : new SFString("CameraViewpoint")}),

                    new ROUTE({
                      fromField : new SFString("value_changed"),
                      fromNode : new SFString("CameraOrientationInterpolator"),
                      toField : new SFString("orientation"),
                      toNode : new SFString("CameraViewpoint")}),

                    new Script({
                      DEF : new SFString("CameraScript"),
                      directOutput : new SFBool(true),
                      mustEvaluate : new SFBool(true),
                      { "#comment" : new CommentsBlock("binding is controlled externally, all camera operations proceed the same regardless of whether bound or not") },
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFSTRING,
                          name : new SFString("description"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Text description to be displayed for this Camera")}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("position"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Camera position in local transformation frame")}),

                        new field({
                          type : field.TYPE_SFROTATION,
                          name : new SFString("orientation"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Camera rotation in local transformation frame")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("set_fraction"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                          appinfo : new SFString("input fraction drives interpolators")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("set_bind"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                          appinfo : new SFString("input event binds or unbinds this Camera")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("fieldOfView"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("pi/4")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("nearClipPlane"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Vector distance to near clipping plane")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("farClipPlane"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Vector distance to far clipping plane")}),

                        new field({
                          type : field.TYPE_MFNODE,
                          name : new SFString("shots"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Array of CameraShot nodes which in turn contain CameraMovement nodes"),
                          { "#comment" : new CommentsBlock("initialization nodes (if any) go here") }}),

                        new field({
                          type : field.TYPE_SFCOLOR,
                          name : new SFString("filterColor"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Camera filter color that modifies virtual lens capture")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("filterTransparency"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Camera filter transparency that modifies virtual lens capture")}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("upVector"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("upVector changes modify camera orientation (and possibly vice versa)")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("fStop"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Focal length divided effective aperture diameter indicating width of focal plane")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("focusDistance"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Distance to focal plane of sharpest focus")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("isActive"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                          appinfo : new SFString("Mark start/stop with true/false output respectively useful to trigger external animations")}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("totalDuration"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                          appinfo : new SFString("Total duration of contained enabled CameraShot (and thus CameraMovement) move durations")}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("offlineRender"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("OfflineRender node"),
                          { "#comment" : new CommentsBlock("initialization node (if any) goes here") }}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("ViewpointNode"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("node reference to permit getting setting fields from within Script"),
                          children : new MFNode([
                            new Viewpoint({
                              USE : new SFString("CameraViewpoint")})])}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("NavInfoNode"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("node reference to permit getting setting fields from within Script"),
                          children : new MFNode([
                            new NavigationInfo({
                              USE : new SFString("CameraNavInfo")})])}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("CameraPI"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("node reference to permit getting setting fields from within Script"),
                          children : new MFNode([
                            new PositionInterpolator({
                              USE : new SFString("CameraPositionInterpolator")})])}),

                        new field({
                          type : field.TYPE_SFNODE,
                          name : new SFString("CameraOI"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("node reference to permit getting setting fields from within Script"),
                          children : new MFNode([
                            new OrientationInterpolator({
                              USE : new SFString("CameraOrientationInterpolator")})])}),

                        new field({
                          type : field.TYPE_MFFLOAT,
                          name : new SFString("key"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("key array for interpolators")}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("keyValuePosition"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("keyValue array for PositionInterpolator")}),

                        new field({
                          type : field.TYPE_MFROTATION,
                          name : new SFString("keyValueOrientation"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("keyValue array for OrientationInterpolator")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("animated"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("whether internal CameraShot and CameraMove nodes are tracking or changed via ROUTE events"),
                          value : new SFString("false")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("initialized"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("perform checkShots() function once immediately after initialization"),
                          value : new SFString("false")}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("shotCount"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("how many CameraShot nodes are contained in shots array"),
                          value : new SFString("0")}),

                        new field({
                          type : field.TYPE_SFINT32,
                          name : new SFString("movesCount"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("how many CameraMove nodes are contained in moves array"),
                          value : new SFString("0")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("frameCount"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("how many frames were created in current loop"),
                          value : new SFString("0")}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("startTime"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("holding variable"),
                          value : new SFString("0")}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("priorTraceTime"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("holding variable"),
                          value : new SFString("0")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("traceEnabled"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("enable console output to trace script computations and prototype progress")}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("description"),
                              protoField : new SFString("description")}),

                            new connect({
                              nodeField : new SFString("position"),
                              protoField : new SFString("position")}),

                            new connect({
                              nodeField : new SFString("orientation"),
                              protoField : new SFString("orientation")}),

                            new connect({
                              nodeField : new SFString("set_fraction"),
                              protoField : new SFString("set_fraction")}),

                            new connect({
                              nodeField : new SFString("set_bind"),
                              protoField : new SFString("set_bind")}),

                            new connect({
                              nodeField : new SFString("fieldOfView"),
                              protoField : new SFString("fieldOfView")}),

                            new connect({
                              nodeField : new SFString("nearClipPlane"),
                              protoField : new SFString("nearClipPlane")}),

                            new connect({
                              nodeField : new SFString("farClipPlane"),
                              protoField : new SFString("farClipPlane")}),

                            new connect({
                              nodeField : new SFString("shots"),
                              protoField : new SFString("shots")}),

                            new connect({
                              nodeField : new SFString("filterColor"),
                              protoField : new SFString("filterColor")}),

                            new connect({
                              nodeField : new SFString("filterTransparency"),
                              protoField : new SFString("filterTransparency")}),

                            new connect({
                              nodeField : new SFString("upVector"),
                              protoField : new SFString("upVector")}),

                            new connect({
                              nodeField : new SFString("fStop"),
                              protoField : new SFString("fStop")}),

                            new connect({
                              nodeField : new SFString("focusDistance"),
                              protoField : new SFString("focusDistance")}),

                            new connect({
                              nodeField : new SFString("isActive"),
                              protoField : new SFString("isActive")}),

                            new connect({
                              nodeField : new SFString("totalDuration"),
                              protoField : new SFString("totalDuration")}),

                            new connect({
                              nodeField : new SFString("offlineRender"),
                              protoField : new SFString("offlineRender")}),

                            new connect({
                              nodeField : new SFString("traceEnabled"),
                              protoField : new SFString("traceEnabled")})])})),
                      .setSourceCode("ecmascript:\n"+
"function initialize () // CameraScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"    NavInfoNode.avatarSize[0]   = nearClipPlane;\n"+
"\n"+
"    // remaining setups deferred to invocation of checkShots() method\n"+
"    // thanks to Yvonne Jung Fraunhofer for diagnosing better approach to function initialization\n"+
"    alwaysPrint ('initialize complete');\n"+
"}\n"+
"\n"+
"function checkShots (eventValue)\n"+
"{\n"+
"    tracePrint ('checkShots() method should only occur after initialize() methods in all other Scripts are complete');\n"+
"\n"+
"    // compute totalDuration by summing durations from contained CameraShot and CameraMovement nodes\n"+
"    totalDuration= 0;\n"+
"    shotCount  = shots.length;\n"+
"    movesCount = 0;\n"+
"    for (i = 0; i < shotCount; i++) // shots index\n"+
"    {\n"+
"       tracePrint ('shots[' + i + '].moves.length=' + shots[i].moves.length);\n"+
"       movesCount   += shots[i].moves.length;\n"+
"       totalDuration = totalDuration + shots[i].shotDuration;\n"+
"       if (shots[i].moves.length == 0)\n"+
"       {\n"+
"          alwaysPrint ('warning: CameraShot[' + i + '][' + shots[i].description + '] has no contained CameraMove nodes');\n"+
"       }\n"+
"    }\n"+
"    // size checks before proceeding\n"+
"    if (shotCount == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: no CameraShot nodes found for the shots, nothing to do!');\n"+
"       return;\n"+
"    }\n"+
"    else if (movesCount == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: no CameraMove nodes found for the shots, nothing to do!');\n"+
"       return;\n"+
"    }\n"+
"    else if (totalDuration == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: totalDuration = 0 seconds, nothing to do!');\n"+
"       return;\n"+
"    }\n"+
"    tracePrint ('number of contained CameraShot nodes=' + shotCount);\n"+
"    tracePrint ('number of contained CameraMove nodes=' + movesCount);\n"+
"    tracePrint ('totalDuration=' + totalDuration + ' seconds for all shots and moves');\n"+
"\n"+
"    // compute interpolators\n"+
"    var k = 0; // index for latest key, keyValuePosition, keyValueOrientation\n"+
"    for (i = 0; i < shotCount; i++) // shots index\n"+
"    {\n"+
"        if (i==0) // initial entries\n"+
"        {\n"+
"           key[0]                   = 0.0; // no previous move\n"+
"           keyValuePosition[0]      = shots[i].initialPosition;\n"+
"           keyValueOrientation[0]   = shots[i].initialOrientation;\n"+
"        }\n"+
"        else     // new shot repositions, reorients camera as clean break from preceding shot/move\n"+
"        {\n"+
"           key[k+1]                 = key[k]; // start from end from previous move\n"+
"           keyValuePosition[k+1]    = shots[i].initialPosition;\n"+
"           keyValueOrientation[k+1] = shots[i].initialOrientation;\n"+
"           k++;\n"+
"        }\n"+
"        tracePrint (shots[i].description);\n"+
"        tracePrint ('shots[i].moves.length=' + shots[i].moves.length);\n"+
"\n"+
"        for (j = 0; j < shots[i].moves.length; j++) // moves index\n"+
"        {\n"+
"            var durationFloat =              shots[i].moves[j].duration;  // implicit type conversion from SFTime\n"+
"            //  durationFloat = new SFFloat (shots[i].moves[j].duration); // explicit type conversion from SFTime\n"+
"            //  tracePrint ('durationFloat=' + durationFloat);\n"+
"            key[k+1]               = key[k] + (durationFloat / totalDuration);\n"+
"            keyValuePosition[k+1]  = shots[i].moves[j].goalPosition;\n"+
"            if (!animated)\n"+
"            {\n"+
"                 keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\n"+
"            }\n"+
"            else\n"+
"            {\n"+
"                // using constructor SFRotation (SFVec3f fromVector, SFVec3f toVector)\n"+
"                // see X3D ECMAScript binding Table 7.18 — SFRotation instance creation functions\n"+
"\n"+
"                // test if difference vector is zero, if so maintain previous rotation\n"+
"                var shotVector = ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize();\n"+
"                if (shotVector.length() >= 0)\n"+
"                {\n"+
"                    // default view direction is along -Z axis\n"+
"                    shots[i].moves[j].goalOrientation = new SFRotation (new SFVec3f (0, 0, 1), shotVector);\n"+
"                    keyValueOrientation[k+1] = shots[i].moves[j].goalOrientation;\n"+
"                }\n"+
"                else // note (k > 0)\n"+
"                {\n"+
"                    keyValueOrientation[k+1] = keyValueOrientation[k];  // no change\n"+
"                }\n"+
"\n"+
"                tracePrint ('shots[' + i + '].moves[' + j + '].goalAimPoint=' + shots[i].moves[j].goalAimPoint.toString());\n"+
"                tracePrint ('        ViewpointNode.position=' + ViewpointNode.position.toString());\n"+
"                tracePrint ('          shotVector     delta=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).toString());\n"+
"                tracePrint ('          shotVector normalize=' + ViewpointNode.position.subtract(shots[i].moves[j].goalAimPoint).normalize().toString());\n"+
"                tracePrint ('               goalOrientation=' + shots[i].moves[j].goalOrientation.toString());\n"+
"                tracePrint ('      keyValueOrientation[k+1]=' + keyValueOrientation[k+1].toString() + '\\n');\n"+
"            }\n"+
"            k++; // update index to match latest key, keyValuePosition, keyValueOrientation\n"+
"\n"+
"            // check animated parameter:  set true if any of moves are tracking moves\n"+
"            if (!animated)  animated = shots[i].moves[j].tracking; // once true, remains true\n"+
"         // tracePrint ('shots[' + i + '].moves[' + j + '].tracking=' + shots[i].moves[j].tracking + ', animated=' + animated);\n"+
"\n"+
"            // intermediate trace\n"+
"            tracePrint ('                key=' + key);\n"+
"            tracePrint ('   keyValuePosition=' + keyValuePosition);\n"+
"            tracePrint ('keyValueOrientation=' + keyValueOrientation);\n"+
"            tracePrint ('- ' + shots[i].moves[j].description);\n"+
"        }\n"+
"    }\n"+
"    tracePrint ('                key=' + key);\n"+
"    tracePrint ('   keyValuePosition=' + keyValuePosition);\n"+
"    tracePrint ('keyValueOrientation=' + keyValueOrientation);\n"+
"    if (key.length != keyValuePosition.length)\n"+
"    {\n"+
"      alwaysPrint ('warning: internal error during array construction, ' +\n"+
"                  'key.length=' + key.length + ' must equal ' +\n"+
"                  'keyValuePosition.length=' + keyValuePosition.length);\n"+
"    }\n"+
"    if (key.length != keyValueOrientation.length)\n"+
"    {\n"+
"      alwaysPrint ('warning: internal error during array construction, ' +\n"+
"                  'key.length=' + key.length + ' must equal ' +\n"+
"                  'keyValueOrientation.length=' + keyValueOrientation.length);\n"+
"    }\n"+
"    if (key.length != (shotCount + movesCount))\n"+
"    {\n"+
"      alwaysPrint ('warning: internal error during array construction, ' +\n"+
"                  'key.length=' + key.length + ' must equal ' +\n"+
"                  '(shotCount + movesCount)=' + (shotCount + movesCount));\n"+
"    }\n"+
"    tracePrint ('           animated=' + animated);\n"+
"    // set node values\n"+
"    CameraPI.key      = key;\n"+
"    CameraOI.key      = key;\n"+
"    CameraPI.keyValue = keyValuePosition;\n"+
"    CameraOI.keyValue = keyValueOrientation;\n"+
"\n"+
"    if (!animated) // output results\n"+
"    {\n"+
"        tracePrint ('<PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\n"+
"        tracePrint ('<OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\n"+
"    }\n"+
"    tracePrint ('checkShots() complete');\n"+
"}\n"+
"\n"+
"function stripBrackets (fieldArray)\n"+
"{\n"+
"    // some browsers add brackets to array output strings, this function strips them\n"+
"    outputString = '';\n"+
"    for (i = 0; i < fieldArray.length; i++)\n"+
"    {\n"+
"       outputString += fieldArray[i].toString();\n"+
"       if (i < fieldArray.length - 1) outputString += ' ';\n"+
"    }\n"+
"    return outputString;\n"+
"}\n"+
"\n"+
"function set_fraction (eventValue, timestamp) // input event received for inputOnly field\n"+
"{\n"+
"   // traceEnabled = false;  // for testing purposes\n"+
"\n"+
"   // if Camera is being animated, immediately recompute interpolator settings\n"+
"   if (animated) checkShots (true);\n"+
"\n"+
"   // trace progress on console with reduced output frequency\n"+
"   if (frameCount == 0)\n"+
"   {\n"+
"      alwaysPrint ('Animation loop commencing, timestamp=' + timestamp);\n"+
"      startTime      = timestamp;\n"+
"      priorTraceTime = timestamp;\n"+
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\n"+
"\n"+
"      if (animated) // output results\n"+
"      {\n"+
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\n"+
"        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\n"+
"        tracePrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\n"+
"      }\n"+
"   }\n"+
"   else if ((timestamp - priorTraceTime) >= 1.0) // 1 second trace interval\n"+
"   {\n"+
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ' seconds, frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\n"+
"      priorTraceTime = timestamp;\n"+
"\n"+
"      if (animated) // output results\n"+
"      {\n"+
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\n"+
"        tracePrint ('  <PositionInterpolator    DEF=\\'CameraPositionInterpolator\\'    key=\\'' + stripBrackets(CameraPI.key) + '\\' keyValue=\\'' + stripBrackets(CameraPI.keyValue) + '\\'/>');\n"+
"        alwaysPrint ('  <OrientationInterpolator DEF=\\'CameraOrientationInterpolator\\' key=\\'' + stripBrackets(CameraOI.key) + '\\' keyValue=\\'' + stripBrackets(CameraOI.keyValue) + '\\'/>');\n"+
"      }\n"+
"   }\n"+
"   if (eventValue == 0)\n"+
"   {\n"+
"      // note that zero value is not necessarily sent first by TimeSensor, so otherwise ignored\n"+
"      frameCount++;\n"+
"   }\n"+
"   else if (eventValue == 1)\n"+
"   {\n"+
"      alwaysPrint ('shotClock=' + (timestamp - startTime) + ', frameCount=' + frameCount + ', fraction=' + eventValue + ', position=' + ViewpointNode.position.toString() + ', orientation=' + ViewpointNode.orientation.toString());\n"+
"      if (animated) // output results\n"+
"      {\n"+
"        // TODO how to report or speed up response?  alwaysPrint ('  aimPoint=' + aimPoint.toString());\n"+
"      }\n"+
"      alwaysPrint ('Animation loop complete.');\n"+
"      // do not unbind the Viewpoint and NavigationInfo nodes, let that be controlled externally\n"+
"   }\n"+
"   else\n"+
"   {\n"+
"      frameCount++;\n"+
"   }\n"+
"}\n"+
"\n"+
"function set_bind (eventValue) // input event received for inputOnly field\n"+
"{\n"+
"   // need to ensure CameraShot nodes are properly initialized\n"+
"   if (initialized == false)\n"+
"   {\n"+
"      checkShots (true);\n"+
"      initialized = true;\n"+
"   }\n"+
"   if (eventValue)\n"+
"   {\n"+
"       tracePrint ('Camera has been bound');\n"+
"   }\n"+
"   else\n"+
"   {\n"+
"       tracePrint ('Camera has been unbound');\n"+
"   }\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_position (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    position = eventValue;\n"+
"}\n"+
"\n"+
"function set_orientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    orientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_fieldOfView (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    fieldOfView = eventValue;\n"+
"}\n"+
"\n"+
"function set_nearClipPlane (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    nearClipPlane = eventValue;\n"+
"}\n"+
"\n"+
"function set_farClipPlane (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    farClipPlane = eventValue;\n"+
"}\n"+
"\n"+
"function set_shots (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    shots = eventValue;\n"+
"}\n"+
"\n"+
"function set_filterColor (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    filterColor = eventValue;\n"+
"}\n"+
"\n"+
"function set_filterTransparency (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    filterTransparency = eventValue;\n"+
"}\n"+
"\n"+
"function set_upVector (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    upVector = eventValue;\n"+
"}\n"+
"\n"+
"function set_fStop (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    fStop = eventValue;\n"+
"}\n"+
"\n"+
"function set_focusDistance (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    focusDistance = eventValue;\n"+
"}\n"+
"\n"+
"function set_offlineRender (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    offlineRender = eventValue;\n"+
"}\n"+
"\n"+
"function set_key (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    key = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValuePosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValuePosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValueOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValueOrientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_animated (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    animated = eventValue;\n"+
"}\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"    // try to ensure outputValue is converted to string despite Browser.println idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[Camera: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[Camera] ' + outputString + '\\n');\n"+
"}")])}),

                    new ROUTE({
                      fromField : new SFString("position"),
                      fromNode : new SFString("CameraScript"),
                      toField : new SFString("position"),
                      toNode : new SFString("CameraViewpoint")}),

                    new ROUTE({
                      fromField : new SFString("orientation"),
                      fromNode : new SFString("CameraScript"),
                      toField : new SFString("orientation"),
                      toNode : new SFString("CameraViewpoint")}),

                    new ROUTE({
                      fromField : new SFString("isActive"),
                      fromNode : new SFString("CameraScript"),
                      toField : new SFString("set_bind"),
                      toNode : new SFString("CameraViewpoint")}),

                    new ROUTE({
                      fromField : new SFString("isActive"),
                      fromNode : new SFString("CameraScript"),
                      toField : new SFString("set_bind"),
                      toNode : new SFString("CameraNavInfo")}),

                    new ROUTE({
                      fromField : new SFString("isActive"),
                      fromNode : new SFString("CameraScript"),
                      toField : new SFString("on"),
                      toNode : new SFString("CameraDirectionalLight")})])}))}),
          { "#comment" : new CommentsBlock("=============== CameraShot ==============") },

            new ProtoDeclare({
              name : new SFString("CameraShot"),
              appinfo : new SFString("CameraShot collects a specific set of CameraMovement animations that make up an individual shot."),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFSTRING,
                      name : new SFString("description"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Text description to be displayed for this CameraShot")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("enabled"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Whether this CameraShot can be activated"),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_MFNODE,
                      name : new SFString("moves"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Set of CameraMovement nodes"),
                      { "#comment" : new CommentsBlock("initializing CameraMovement nodes are inserted here by scene author using ProtoInstance") }}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("initialPosition"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Setup to reinitialize camera position for this shot"),
                      value : new SFString("0 0 10")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("initialOrientation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Setup to reinitialize camera rotation for this shot"),
                      value : new SFString("0 0 1 0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("initialAimPoint"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Setup to reinitialize aimpoint (relative location for camera direction) for this shot"),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("initialFieldOfView"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("pi/4"),
                      value : new SFString("0.7854")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("initialFStop"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Focal length divided effective aperture diameter indicating width of focal plane"),
                      value : new SFString("5.6")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("initialFocusDistance"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Distance to focal plane of sharpest focus"),
                      value : new SFString("10")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("shotDuration"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      appinfo : new SFString("Subtotal duration of contained CameraMovement move durations")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("isActive"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      appinfo : new SFString("Mark start/stop with true/false output respectively useful to trigger external animations")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("traceEnabled"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("enable console output to trace script computations and prototype progress"),
                      value : new SFString("false")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  children : new MFNode([
                    new Script({
                      DEF : new SFString("CameraShotScript"),
                      directOutput : new SFBool(true),
                      mustEvaluate : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFSTRING,
                          name : new SFString("description"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Text description to be displayed for this CameraShot")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("enabled"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Whether this CameraShot can be activated")}),

                        new field({
                          type : field.TYPE_MFNODE,
                          name : new SFString("moves"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Set of CameraMovement nodes"),
                          { "#comment" : new CommentsBlock("initialization nodes (if any) go here") }}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("initialPosition"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Setup to reinitialize camera position for this shot")}),

                        new field({
                          type : field.TYPE_SFROTATION,
                          name : new SFString("initialOrientation"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Setup to reinitialize camera rotation for this shot")}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("initialAimPoint"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Setup to reinitialize aimpoint (relative location for camera direction) for this shot")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("initialFieldOfView"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("pi/4")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("initialFStop"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Focal length divided effective aperture diameter indicating width of focal plane")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("initialFocusDistance"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Distance to focal plane of sharpest focus")}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("shotDuration"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                          appinfo : new SFString("Subtotal duration of contained CameraMovement move durations")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("isActive"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                          appinfo : new SFString("Mark start/stop with true/false output respectively useful to trigger external animations")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("traceEnabled"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("enable console output to trace script computations and prototype progress")}),

                        new field({
                          type : field.TYPE_MFFLOAT,
                          name : new SFString("key"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("key array for interpolators")}),

                        new field({
                          type : field.TYPE_MFVEC3F,
                          name : new SFString("keyValuePosition"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("keyValue array for PositionInterpolator")}),

                        new field({
                          type : field.TYPE_MFROTATION,
                          name : new SFString("keyValueOrientation"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("keyValue array for OrientationInterpolator")}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("description"),
                              protoField : new SFString("description")}),

                            new connect({
                              nodeField : new SFString("enabled"),
                              protoField : new SFString("enabled")}),

                            new connect({
                              nodeField : new SFString("moves"),
                              protoField : new SFString("moves")}),

                            new connect({
                              nodeField : new SFString("initialPosition"),
                              protoField : new SFString("initialPosition")}),

                            new connect({
                              nodeField : new SFString("initialOrientation"),
                              protoField : new SFString("initialOrientation")}),

                            new connect({
                              nodeField : new SFString("initialAimPoint"),
                              protoField : new SFString("initialAimPoint")}),

                            new connect({
                              nodeField : new SFString("initialFieldOfView"),
                              protoField : new SFString("initialFieldOfView")}),

                            new connect({
                              nodeField : new SFString("initialFStop"),
                              protoField : new SFString("initialFStop")}),

                            new connect({
                              nodeField : new SFString("initialFocusDistance"),
                              protoField : new SFString("initialFocusDistance")}),

                            new connect({
                              nodeField : new SFString("shotDuration"),
                              protoField : new SFString("shotDuration")}),

                            new connect({
                              nodeField : new SFString("isActive"),
                              protoField : new SFString("isActive")}),

                            new connect({
                              nodeField : new SFString("traceEnabled"),
                              protoField : new SFString("traceEnabled")})])})),
                      .setSourceCode("ecmascript:\n"+
"function initialize () // CameraShotScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"    // compute shotDuration by summing durations from contained CameraMovement nodes\n"+
"    shotDuration = 0;\n"+
"    for (i = 0; i < moves.length; i++)\n"+
"    {\n"+
"        shotDuration = shotDuration + moves[i].duration;\n"+
"    }\n"+
"    alwaysPrint ('number of contained CameraMove nodes=' + moves.length + ', shotDuration=' + shotDuration + ' seconds');\n"+
"\n"+
"//  tracePrint ('... initialize() complete');\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_enabled (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    enabled = eventValue;\n"+
"}\n"+
"\n"+
"function set_moves (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    moves = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialPosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialPosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialOrientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialAimPoint (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialAimPoint = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialFieldOfView (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialFieldOfView = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialFStop (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialFStop = eventValue;\n"+
"}\n"+
"\n"+
"function set_initialFocusDistance (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    initialFocusDistance = eventValue;\n"+
"}\n"+
"\n"+
"function set_key (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    key = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValuePosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValuePosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_keyValueOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    keyValueOrientation = eventValue;\n"+
"}\n"+
"\n"+
"// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"	// try to ensure outputValue is converted to string despite browser idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[CameraShot: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[CameraShot] ' + outputString + '\\n');\n"+
"}")])}),
                  { "#comment" : new CommentsBlock("Add any ROUTEs here, going from Script to other nodes within ProtoBody") }])}))}),
          { "#comment" : new CommentsBlock("=============== CameraMovement ==============") },

            new ProtoDeclare({
              name : new SFString("CameraMovement"),
              appinfo : new SFString("CameraMovement node defines a single camera movement animation including goalPosition, goalOrientation, goalAimPoint and goalFieldOfView."),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFSTRING,
                      name : new SFString("description"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Text description to be displayed for this CameraMovement")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("enabled"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Whether this CameraMovement can be activated"),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("duration"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Duration in seconds for this move"),
                      value : new SFString("0")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("goalPosition"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Goal camera position for this move"),
                      value : new SFString("0 0 10")}),

                    new field({
                      type : field.TYPE_SFROTATION,
                      name : new SFString("goalOrientation"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Goal camera rotation for this move"),
                      value : new SFString("0 0 1 0")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("tracking"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Whether or not camera direction is tracking towards the aimPoint"),
                      value : new SFString("false")}),

                    new field({
                      type : field.TYPE_SFVEC3F,
                      name : new SFString("goalAimPoint"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Goal aimPoint for this move, ignored if tracking=false"),
                      value : new SFString("0 0 0")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("goalFieldOfView"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Goal fieldOfView for this move"),
                      value : new SFString("0.7854")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("goalFStop"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Focal length divided effective aperture diameter indicating width of focal plane"),
                      value : new SFString("5.6")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("goalFocusDistance"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Distance to focal plane of sharpest focus"),
                      value : new SFString("10")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("isActive"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      appinfo : new SFString("Mark start/stop with true/false output respectively useful to trigger external animations")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("traceEnabled"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("enable console output to trace script computations and prototype progress"),
                      value : new SFString("false")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  { "#comment" : new CommentsBlock("First node determines node type of this prototype") },
                  { "#comment" : new CommentsBlock("Subsequent nodes do not render, but still must be a valid X3D subgraph") },
                  { "#comment" : new CommentsBlock("Script holds CameraMovement initialization values for query by parent CameraShot, and also permits changing values via events") },
                  children : new MFNode([
                    new Script({
                      DEF : new SFString("CameraMovementScript"),
                      directOutput : new SFBool(true),
                      mustEvaluate : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFSTRING,
                          name : new SFString("description"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Text description to be displayed for this CameraMovement")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("enabled"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Whether this CameraMovement can be activated")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("duration"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Duration in seconds for this move")}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("goalPosition"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Goal camera position for this move")}),

                        new field({
                          type : field.TYPE_SFROTATION,
                          name : new SFString("goalOrientation"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Goal camera rotation for this move")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("tracking"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Whether or not camera direction is tracking towards the aimPoint")}),

                        new field({
                          type : field.TYPE_SFVEC3F,
                          name : new SFString("goalAimPoint"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Goal aimPoint for this move, ignored if tracking=false")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("goalFieldOfView"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Goal fieldOfView for this move")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("goalFStop"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Focal length divided effective aperture diameter indicating width of focal plane")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("goalFocusDistance"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Distance to focal plane of sharpest focus")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("isActive"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                          appinfo : new SFString("Mark start/stop with true/false output respectively useful to trigger external animations")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("traceEnabled"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("enable console output to trace script computations and prototype progress")}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("description"),
                              protoField : new SFString("description")}),

                            new connect({
                              nodeField : new SFString("enabled"),
                              protoField : new SFString("enabled")}),

                            new connect({
                              nodeField : new SFString("duration"),
                              protoField : new SFString("duration")}),

                            new connect({
                              nodeField : new SFString("goalPosition"),
                              protoField : new SFString("goalPosition")}),

                            new connect({
                              nodeField : new SFString("goalOrientation"),
                              protoField : new SFString("goalOrientation")}),

                            new connect({
                              nodeField : new SFString("tracking"),
                              protoField : new SFString("tracking")}),

                            new connect({
                              nodeField : new SFString("goalAimPoint"),
                              protoField : new SFString("goalAimPoint")}),

                            new connect({
                              nodeField : new SFString("goalFieldOfView"),
                              protoField : new SFString("goalFieldOfView")}),

                            new connect({
                              nodeField : new SFString("goalFStop"),
                              protoField : new SFString("goalFStop")}),

                            new connect({
                              nodeField : new SFString("goalFocusDistance"),
                              protoField : new SFString("goalFocusDistance")}),

                            new connect({
                              nodeField : new SFString("isActive"),
                              protoField : new SFString("isActive")}),

                            new connect({
                              nodeField : new SFString("traceEnabled"),
                              protoField : new SFString("traceEnabled")})])})),
                      .setSourceCode("ecmascript:\n"+
"function initialize () // CameraMovementScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"    alwaysPrint ('initialize goalPosition=' + goalPosition.toString() + ', goalOrientation=' + goalOrientation.toString() +\n"+
"                           ', goalAimPoint=' + goalAimPoint.toString() // + ', tracking=' + tracking.toString()\n"+
"                           );\n"+
"    if (duration < 0)\n"+
"    {\n"+
"       alwaysPrint ('error: negative duration=' + duration + ', reset to 0 and ignored');\n"+
"       duration = 0;\n"+
"    }\n"+
"    else if (duration == 0)\n"+
"    {\n"+
"       alwaysPrint ('warning: duration=0, nothing to do!');\n"+
"    }\n"+
"    tracePrint ('... initialize complete');\n"+
"}\n"+
"\n"+
"function set_goalAimPoint (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalAimPoint_changed = eventValue;\n"+
"    tracePrint ('goalAimPoint=' + goalAimPoint.toString());\n"+
"\n"+
"    // updated goalOrientation tracking is handled by Camera recomputing the OrientationInterpolator\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_enabled (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    enabled = eventValue;\n"+
"}\n"+
"\n"+
"function set_duration (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    duration = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalPosition (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalPosition = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalOrientation (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalOrientation = eventValue;\n"+
"}\n"+
"\n"+
"function set_tracking (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    tracking = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalFieldOfView (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalFieldOfView = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalFStop (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalFStop = eventValue;\n"+
"}\n"+
"\n"+
"function set_goalFocusDistance (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    goalFocusDistance = eventValue;\n"+
"}\n"+
"\n"+
"// TODO consider method set_active for constructed Camera node BooleanSequencer to send isActive\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"	// try to ensure outputValue is converted to string despite browser idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[CameraMovement: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[CameraMovement] ' + outputString + '\\n');\n"+
"}")])}),
                  { "#comment" : new CommentsBlock("Add any ROUTEs here, going from Script to other nodes within ProtoBody") }])}))}),
          { "#comment" : new CommentsBlock("=============== OfflineRender ==============") },

            new ProtoDeclare({
              name : new SFString("OfflineRender"),
              appinfo : new SFString("OfflineRender defines a parameters for offline rendering of Camera animation output to a movie file (or possibly a still shot)."),
              ProtoInterface : new SFNode(
                new ProtoInterface({
                  { "#comment" : new CommentsBlock("TODO non-photorealistic rendering (NPR) parameters") },
                  field : new MFNode([
                    new field({
                      type : field.TYPE_SFSTRING,
                      name : new SFString("description"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Text description to be displayed for this OfflineRender")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("enabled"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Whether this OfflineRender can be activated"),
                      value : new SFString("true")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("frameRate"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Frames per second recorded for this rendering"),
                      value : new SFString("30")}),

                    new field({
                      type : field.TYPE_SFVEC2F,
                      name : new SFString("frameSize"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Size of frame in number of pixels width and height"),
                      value : new SFString("640 480")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("pixelAspectRatio"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                      appinfo : new SFString("Relative dimensions of pixel height/width typically 1.33 or 1"),
                      value : new SFString("1.33")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("set_startTime"),
                      accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                      appinfo : new SFString("Begin render operation")}),

                    new field({
                      type : field.TYPE_SFFLOAT,
                      name : new SFString("progress"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      appinfo : new SFString("Progress performing render operation (0..1)")}),

                    new field({
                      type : field.TYPE_SFTIME,
                      name : new SFString("renderCompleteTime"),
                      accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                      appinfo : new SFString("Render operation complete")}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("movieFormat"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("Format of rendered output movie (mpeg mp4 etc.), use first supported format"),
                      value : new SFString("\"mpeg\"")}),

                    new field({
                      type : field.TYPE_MFSTRING,
                      name : new SFString("imageFormat"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("Format of rendered output images (png jpeg gif tiff etc.) use first supported format"),
                      value : new SFString("\"png\"")}),

                    new field({
                      type : field.TYPE_SFBOOL,
                      name : new SFString("traceEnabled"),
                      accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                      appinfo : new SFString("enable console output to trace script computations and prototype progress"),
                      value : new SFString("false")})])})),
              ProtoBody : new SFNode(
                new ProtoBody({
                  { "#comment" : new CommentsBlock("First node determines node type of this prototype") },
                  { "#comment" : new CommentsBlock("Subsequent nodes do not render, but still must be a valid X3D subgraph") },
                  children : new MFNode([
                    new Script({
                      DEF : new SFString("OfflineRenderScript"),
                      mustEvaluate : new SFBool(true),
                      field : new MFNode([
                        new field({
                          type : field.TYPE_SFSTRING,
                          name : new SFString("description"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Text description to be displayed for this OfflineRender")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("enabled"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Whether this OfflineRender can be activated")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("frameRate"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Frames per second recorded for this rendering")}),

                        new field({
                          type : field.TYPE_SFVEC2F,
                          name : new SFString("frameSize"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Size of frame in number of pixels width and height")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("pixelAspectRatio"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTOUTPUT),
                          appinfo : new SFString("Relative dimensions of pixel height/width typically 1.33 or 1")}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("set_startTime"),
                          accessType : new SFString(field.ACCESSTYPE_INPUTONLY),
                          appinfo : new SFString("Begin render operation")}),

                        new field({
                          type : field.TYPE_SFFLOAT,
                          name : new SFString("progress"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                          appinfo : new SFString("Progress performing render operation (0..1)")}),

                        new field({
                          type : field.TYPE_SFTIME,
                          name : new SFString("renderCompleteTime"),
                          accessType : new SFString(field.ACCESSTYPE_OUTPUTONLY),
                          appinfo : new SFString("Render operation complete")}),

                        new field({
                          type : field.TYPE_MFSTRING,
                          name : new SFString("movieFormat"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("Format of rendered output movie (mpeg mp4 etc.)")}),

                        new field({
                          type : field.TYPE_MFSTRING,
                          name : new SFString("imageFormat"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("Format of rendered output images (png jpeg gif tiff etc.)")}),

                        new field({
                          type : field.TYPE_SFBOOL,
                          name : new SFString("traceEnabled"),
                          accessType : new SFString(field.ACCESSTYPE_INITIALIZEONLY),
                          appinfo : new SFString("enable console output to trace script computations and prototype progress")}),
                      IS : new SFNode(
                        new IS({
                          connect : new MFNode([
                            new connect({
                              nodeField : new SFString("description"),
                              protoField : new SFString("description")}),

                            new connect({
                              nodeField : new SFString("enabled"),
                              protoField : new SFString("enabled")}),

                            new connect({
                              nodeField : new SFString("frameRate"),
                              protoField : new SFString("frameRate")}),

                            new connect({
                              nodeField : new SFString("frameSize"),
                              protoField : new SFString("frameSize")}),

                            new connect({
                              nodeField : new SFString("pixelAspectRatio"),
                              protoField : new SFString("pixelAspectRatio")}),

                            new connect({
                              nodeField : new SFString("set_startTime"),
                              protoField : new SFString("set_startTime")}),

                            new connect({
                              nodeField : new SFString("progress"),
                              protoField : new SFString("progress")}),

                            new connect({
                              nodeField : new SFString("renderCompleteTime"),
                              protoField : new SFString("renderCompleteTime")}),

                            new connect({
                              nodeField : new SFString("movieFormat"),
                              protoField : new SFString("movieFormat")}),

                            new connect({
                              nodeField : new SFString("imageFormat"),
                              protoField : new SFString("imageFormat")}),

                            new connect({
                              nodeField : new SFString("traceEnabled"),
                              protoField : new SFString("traceEnabled")})])})),
                      .setSourceCode("ecmascript:\n"+
"function initialize () // OfflineRenderScript\n"+
"{\n"+
"//  tracePrint ('initialize start...');\n"+
"\n"+
"    tracePrint ('... initialize complete');\n"+
"}\n"+
"\n"+
"function set_description (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    description = eventValue;\n"+
"}\n"+
"\n"+
"function set_enabled (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    enabled = eventValue;\n"+
"}\n"+
"\n"+
"function set_frameRate (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    frameRate = eventValue;\n"+
"}\n"+
"\n"+
"function set_frameSize (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    frameSize = eventValue;\n"+
"}\n"+
"\n"+
"function set_pixelAspectRatio (eventValue) // input event received for inputOutput field\n"+
"{\n"+
"    pixelAspectRatio = eventValue;\n"+
"}\n"+
"\n"+
"function set_startTime (eventValue) // input event received for inputOnly field\n"+
"{\n"+
"   // do something with input eventValue;\n"+
"}\n"+
"\n"+
"function tracePrint (outputValue)\n"+
"{\n"+
"	if (traceEnabled) alwaysPrint (outputValue);\n"+
"}\n"+
"\n"+
"function alwaysPrint (outputValue)\n"+
"{\n"+
"	// try to ensure outputValue is converted to string despite browser idiosyncracies\n"+
"    var outputString = outputValue.toString(); // utility function according to spec\n"+
"    if (outputString == null) outputString = outputValue; // direct cast\n"+
"\n"+
"    if  (description.length > 0)\n"+
"         Browser.print ('[OfflineRender: ' + description + '] ' + outputString + '\\n');\n"+
"    else\n"+
"         Browser.print ('[OfflineRender] ' + outputString + '\\n');\n"+
"}")])}),
                  { "#comment" : new CommentsBlock("Add any ROUTEs here, going from Script to other nodes within ProtoBody") }])}))}),
          { "#comment" : new CommentsBlock("=============== Launch Prototype Example ==============") },

            new Background({
              skyColor : new MFColor([0.282353,0.380392,0.470588])}),

            new Anchor({
              description : new SFString("launch CameraExample scene"),
              url : new MFString(["CameraExamples.x3d","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.x3d","CameraExamples.wrl","http://www.web3d.org/x3d/content/examples/Basic/development/CameraExamples.wrl"]),
              children : new MFNode([
                new Transform({
                  children : new MFNode([
                    new Shape({
                      geometry : new SFNode(
                        new Text({
                          string : new MFString(["CameraPrototypes.x3d","defines multiple prototype nodes","","Click on this text to see","CameraExamples.x3d scene"]),
                          fontStyle : new SFNode(
                            new FontStyle({
                              justify : new MFString(["MIDDLE","MIDDLE"])}))})),
                      appearance : new SFNode(
                        new Appearance({
                          material : new SFNode(
                            new Material({
                              diffuseColor : new SFColor([1,1,0.2])}))}))})])})])})])}))});
console.log(X3D0.toXMLNode());
