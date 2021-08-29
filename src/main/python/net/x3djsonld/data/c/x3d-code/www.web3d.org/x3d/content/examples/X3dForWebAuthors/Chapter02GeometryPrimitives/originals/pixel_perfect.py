###############################################
#
# Now available: developmental python x3d.py package on PyPi for import.
#   This approach greatly simplifies Python X3D deployment and use.
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
#    import x3d         # traditional way to subclass x3d package, all classes require x3d.* prefix
#                       # but python source is very verbose, for example x3d.Material x3d.Shape etc.
#                       # X3dToPython.xslt stylesheet insertPackagePrefix=true supports this option.

from x3d import *

###############################################

newModel=X3D(profile='Immersive',version='3.1',
  head=head(
    children=[
    meta(content='C:\www.web3d.org\x3d\content\examples\X3dForWebAuthors\Chapter02GeometryPrimitives\originals\pixel_perfect.x3d',name='title'),
    meta(content='*enter description here, short-sentence summaries preferred*',name='description'),
    meta(content='*enter name of original author here*',name='creator'),
    meta(content='*if manually translating VRML-to-X3D, enter name of person translating here*',name='translator'),
    meta(content='*enter date of initial version here*',name='created'),
    meta(content='12 October 2009',name='translated'),
    meta(content='12 October 2009',name='modified'),
    meta(content='*enter version here*',name='version'),
    meta(content='*enter reference citation or relative/online url here*',name='reference'),
    meta(content='*enter additional url/bibliographic reference information here*',name='reference'),
    meta(content='*enter reference resource here if required to support function, delivery, or coherence of content*',name='requires'),
    meta(content='*enter copyright information here* Example: Copyright (c) Web3D Consortium Inc. 2006',name='rights'),
    meta(content='*enter drawing filename/url here*',name='drawing'),
    meta(content='*enter image filename/url here*',name='image'),
    meta(content='*enter movie filename/url here*',name='MovingImage'),
    meta(content='*enter photo filename/url here*',name='photo'),
    meta(content='*enter subject keywords here*',name='subject'),
    meta(content='*enter permission statements or url here*',name='accessRights'),
    meta(content='*insert any known warnings, bugs or errors here*',name='warning'),
    meta(content='http://*enter online url address for this file here*/C:\www.web3d.org\x3d\content\examples\X3dForWebAuthors\Chapter02GeometryPrimitives\originals\pixel_perfect.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    Background(skyColor=[(1.0,1.0,1.0)]),
    Viewpoint(DEF='home',description='home',fieldOfView=1.4,orientation=(0.0,1.0,0.0,0.35),position=(0.0,1.25,5.0)),
    Viewpoint(DEF='byz',description='Byzantine Astronomical Data',position=(0.0,1.0,2.829157)),
    Transform(translation=(0.0,1.0,0.0),
      children=[
      Shape(
        appearance=Appearance(
          textureTransform=TextureTransform(DEF='tt'),
          texture=ImageTexture(repeatS=False,repeatT=False,url=["byz_small.jpg"])),
        geometry=IndexedFaceSet(DEF='page0',coordIndex=[0,1,2,3,-1],solid=False,texCoordIndex=[0,1,2,3,-1],
          texCoord=TextureCoordinate(point=[(0.0,0.5),(0.0,1.0),(1.0,1.0),(1.0,0.5)]),
          coord=Coordinate(point=[(-1.0,-1.0,0.0),(-1.0,1.0,0.0),(1.0,1.0,0.0),(1.0,-1.0,0.0)]))),
      TouchSensor(DEF='byz_touch')]),
    Transform(DEF='Slider1',scale=(7.4608,7.4608,7.4608),translation=(1.10175,1.20236,0.11536),
      children=[
      PlaneSensor(DEF='Knob_Slide',maxPosition=(0.0,0.07),offset=(0.0,0.07,0.0)),
      Transform(DEF='Knob_Move',translation=(0.0,0.07,0.0),
        children=[
        Shape(DEF='Knob',
          appearance=Appearance(
            material=Material(DEF='Knob_Color',ambientIntensity=0.823529,diffuseColor=(0.18,0.18,0.18),emissiveColor=(1.0,0.7,0.1))),
          geometry=IndexedFaceSet(DEF='_4',coordIndex=[4,5,6,7,-1,7,3,0,4,-1,3,7,6,2,-1,4,0,1,5,-1,5,1,2,6,-1],
            coord=Coordinate(point=[(-0.013638,-0.04,0.001197),(0.013638,-0.04,0.001197),(0.013638,-0.03,0.001197),(-0.013638,-0.03,0.001197),(-0.009802,-0.037032,0.0184),(0.009802,-0.037032,0.0184),(0.009802,-0.032968,0.0184),(-0.009802,-0.032968,0.0184)])))]),
      Shape(DEF='Slot',
        appearance=Appearance(
          material=Material(ambientIntensity=0.0,diffuseColor=(0.0,0.0,0.0))),
        geometry=IndexedFaceSet(DEF='_5',coordIndex=[2,3,0,1,-1],
          coord=Coordinate(point=[(-0.002569,-0.044933,0.0),(0.002569,-0.044933,0.0),(0.002569,0.044933,0.0),(-0.002569,0.044933,0.0)]))),
      Shape(DEF='Metal',
        appearance=Appearance(
          material=Material(ambientIntensity=0.179104,diffuseColor=(0.712766,0.712766,0.712766))),
        geometry=IndexedFaceSet(DEF='_6',coordIndex=[4,0,3,7,-1,6,7,3,2,-1,5,6,2,1,-1,1,0,4,5,-1],
          coord=Coordinate(point=[(-0.002569,-0.044933,0.0),(0.002569,-0.044933,0.0),(0.002569,0.044933,0.0),(-0.002569,0.044933,0.0),(-0.007707,-0.05,0.0),(0.007707,-0.05,0.0),(0.007707,0.05,0.0),(-0.007707,0.05,0.0)]))),
      Script(DEF='Script0',
        field=[
        field(accessType='initializeOnly',name='byz_state',type='SFBool',value=False),
        field(accessType='outputOnly',name='color_out',type='SFColor'),
        field(accessType='initializeOnly',name='maxTranslation',type='SFFloat',value=1.0),
        field(accessType='initializeOnly',name='knobBuff',type='SFColor',value=(0.0,0.0,0.0)),
        field(accessType='initializeOnly',name='trans_buff',type='SFVec2f',value=(0.0,0.0)),
        field(accessType='outputOnly',name='byz_stateout',type='SFBool'),
        field(accessType='inputOnly',name='trans_in',type='SFVec3f'),
        field(accessType='outputOnly',name='trans_out',type='SFVec2f'),
        field(accessType='initializeOnly',name='minTranslation',type='SFFloat',value=0.0),
        field(accessType='inputOnly',name='byz_trigger',type='SFBool'),
        field(accessType='initializeOnly',name='knobColor1',type='SFColor',value=(1.0,0.7,0.1)),
        field(accessType='initializeOnly',name='knobColor0',type='SFColor',value=(0.18,0.18,0.18))])]),
    ROUTE(fromField='translation_changed',fromNode='Knob_Slide',toField='set_translation',toNode='Knob_Move'),
    ROUTE(fromField='translation_changed',fromNode='Knob_Slide',toField='trans_in',toNode='Script0'),
    ROUTE(fromField='trans_out',fromNode='Script0',toField='set_translation',toNode='tt'),
    ROUTE(fromField='color_out',fromNode='Script0',toField='set_emissiveColor',toNode='Knob_Color'),
    ROUTE(fromField='isActive',fromNode='byz_touch',toField='byz_trigger',toNode='Script0'),
    ROUTE(fromField='byz_stateout',fromNode='Script0',toField='set_bind',toNode='byz')])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for C:\www.py")
