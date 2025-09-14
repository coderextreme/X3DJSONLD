####################################################################################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package:
#
#    from x3d import *  # preferred approach, terser source that avoids x3d.* class prefixes
#
# or
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix,
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.
#
####################################################################################################

from x3d import *

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(name='title',content='rubik.x3d'),
    meta(name='creator',content='John Carlson'),
    meta(name='generator',content='manual'),
    meta(name='identifier',content='https://coderextreme.net/X3DJSONLD/rubik.x3d'),
    meta(name='description',content='a kind of rubik cube with spheres')]),
  Scene=Scene(
    children=[
    NavigationInfo(type='"EXAMINE" "ANY"'),
    Viewpoint(description='Rubiks Cube',position=(0,0,12)),
    ProtoDeclare(name='sphereproto',
      ProtoInterface=ProtoInterface(
        field=[
        field(name='xtranslation',accessType='inputOutput',type='SFVec3f',value=(0.0,0.0,0.0))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='xtranslation')]),
          children=[
          Shape(
            geometry=Sphere(),
            appearance=Appearance(
              material=Material(diffuseColor=(1,1,1))))])])),
    ProtoDeclare(name='three',
      ProtoInterface=ProtoInterface(
        field=[
        field(name='ytranslation',accessType='inputOutput',type='SFVec3f',value=(0.0,0.0,0.0))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='ytranslation')]),
          children=[
          ProtoInstance(name='sphereproto',
            fieldValue=[
            fieldValue(name='xtranslation',value=(0,0,0))]),
          ProtoInstance(name='sphereproto',
            fieldValue=[
            fieldValue(name='xtranslation',value=(2,0,0))]),
          ProtoInstance(name='sphereproto',
            fieldValue=[
            fieldValue(name='xtranslation',value=(-2,0,0))])])])),
    ProtoDeclare(name='nine',
      ProtoInterface=ProtoInterface(
        field=[
        field(name='ztranslation',accessType='inputOutput',type='SFVec3f',value=(0.0,0.0,0.0))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='ztranslation')]),
          children=[
          ProtoInstance(name='three',
            fieldValue=[
            fieldValue(name='ytranslation',value=(0,0,0))]),
          ProtoInstance(name='three',
            fieldValue=[
            fieldValue(name='ytranslation',value=(0,2,0))]),
          ProtoInstance(name='three',
            fieldValue=[
            fieldValue(name='ytranslation',value=(0,-2,0))])])])),
    ProtoDeclare(name='twentyseven',
      ProtoInterface=ProtoInterface(
        field=[
        field(name='ttranslation',accessType='inputOutput',type='SFVec3f',value=(0.0,0.0,0.0))]),
      ProtoBody=ProtoBody(
        children=[
        Transform(
          IS=IS(
            connect=[
            connect(nodeField='translation',protoField='ttranslation')]),
          children=[
          ProtoInstance(name='nine',
            fieldValue=[
            fieldValue(name='ztranslation',value=(0,0,0))]),
          ProtoInstance(name='nine',
            fieldValue=[
            fieldValue(name='ztranslation',value=(0,0,2))]),
          ProtoInstance(name='nine',
            fieldValue=[
            fieldValue(name='ztranslation',value=(0,0,-2))])])])),
    ProtoInstance(name='twentyseven',
      fieldValue=[
      fieldValue(name='ttranslation',value=(0,0,0))])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

from browser import document

def change(event):
    src = newModel.Scene.HTML5()
    document.getElementById("zone1").html = src
    document.getElementById("zone2").text = "window.x3dom.reload();"

document["button1"].bind("click", change)
