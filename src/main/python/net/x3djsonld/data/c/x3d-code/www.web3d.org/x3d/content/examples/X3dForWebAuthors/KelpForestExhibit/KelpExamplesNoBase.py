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

newModel=X3D(profile='Immersive',version='3.3',
  head=head(
    children=[
    meta(content='KelpExamplesNoBase.x3d',name='title'),
    meta(content='Creates 3 instances of Kelp that sway.',name='description'),
    meta(content='Joseph Cannon, Dan DeVos, Don Brutzman',name='creator'),
    meta(content='25 September 1998',name='created'),
    meta(content='20 October 2019',name='modified'),
    meta(content='http://faculty.nps.edu/brutzman/kelp',name='reference'),
    meta(content='KelpForestDesignPaperWeb3dSymposiumFebruary2002.pdf',name='reference'),
    meta(content='http://x3dgraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpForestDesignPaperWeb3dSymposiumFebruary2002.pdf',name='reference'),
    meta(content='http://x3dgraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/Teaching3d-KelpForestCaseStudy.pdf',name='reference'),
    meta(content='All content has permissions for free use. Please provide credit to the Naval Postgraduate School (NPS) Modeling Virtual Environments and Simulation (MOVES) Institute.',name='accessRights'),
    meta(content='http://x3dgraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpExamplesNoBase.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='KelpExamplesNoBase.x3d'),
    ExternProtoDeclare(appinfo='Kelp strands and bulbs with no base',name='Kelp',url=["KelpPrototype.x3d#Kelp","http://x3dgraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpPrototype.x3d#Kelp","KelpPrototype.wrl#Kelp","http://x3dgraphics.com/examples/X3dForWebAuthors/KelpForestExhibit/KelpPrototype.wrl#Kelp"],
      field=[
      field(accessType='inputOutput',name='frontBladeSize',type='SFVec3f'),
      field(accessType='inputOutput',name='rearSideBladeHeight',type='SFVec3f'),
      field(accessType='inputOutput',name='frontSideBladeHeight',type='SFVec3f'),
      field(accessType='inputOutput',name='rightBladeSize',type='SFVec3f'),
      field(accessType='inputOutput',name='rightSideBladeHeight',type='SFVec3f'),
      field(accessType='inputOutput',name='leftBladeSize',type='SFVec3f'),
      field(accessType='inputOutput',name='rearBladeSize',type='SFVec3f'),
      field(accessType='inputOutput',name='leftSideBladeHeight',type='SFVec3f')]),
    Group(
      children=[
      Transform(DEF='KelpTransform0',scale=(0.3,0.3,0.3),
        children=[
        ProtoInstance(name='Kelp')]),
      Transform(DEF='KelpTransform1',rotation=(0.0,1.0,0.0,5.5),scale=(0.29,0.29,0.29),translation=(-0.5,0.0,0.0),
        children=[
        ProtoInstance(name='Kelp',
          fieldValue=[
          fieldValue(name='rearSideBladeHeight',value=(0.0,15.0,0.0)),
          fieldValue(name='frontBladeSize',value=(0.4,0.4,0.4)),
          fieldValue(name='frontSideBladeHeight',value=(0.0,23.0,0.0)),
          fieldValue(name='rightBladeSize',value=(0.4,0.4,0.4)),
          fieldValue(name='rightSideBladeHeight',value=(0.0,20.0,0.0)),
          fieldValue(name='leftBladeSize',value=(0.7,0.7,0.7)),
          fieldValue(name='rearBladeSize',value=(0.7,0.7,0.7)),
          fieldValue(name='leftSideBladeHeight',value=(0.0,6.0,0.0))])]),
      Transform(DEF='KelpTransform2',scale=(0.3,0.3,0.3),translation=(0.5,0.0,0.5),
        children=[
        ProtoInstance(name='Kelp',
          fieldValue=[
          fieldValue(name='rearSideBladeHeight',value=(0.0,18.0,0.0)),
          fieldValue(name='frontBladeSize',value=(0.7,0.7,0.7)),
          fieldValue(name='frontSideBladeHeight',value=(0.0,8.0,0.0)),
          fieldValue(name='rightBladeSize',value=(0.7,0.7,0.7)),
          fieldValue(name='rightSideBladeHeight',value=(0.0,16.0,0.0)),
          fieldValue(name='leftBladeSize',value=(0.7,0.7,0.7)),
          fieldValue(name='rearBladeSize',value=(0.4,0.4,0.4)),
          fieldValue(name='leftSideBladeHeight',value=(0.0,13.0,0.0))])])]),
    Group(
      #  ==================== 
      children=[
      TimeSensor(DEF='Clock0',cycleInterval=5.5,loop=True),
      #  ==================== 
      OrientationInterpolator(DEF='KelpPath0',key=[0.0,0.05,0.25,0.45,0.5,0.55,0.75,0.95,1.0],keyValue=[(0,0,1,0.1),(0,0,1,0.095),(0,0,1,0),(0,0,1,-0.095),(0,0,1,-0.1),(0,0,1,-0.095),(0,0,1,0),(0,0,1,0.095),(0,0,1,0.1)]),
      ROUTE(fromField='fraction_changed',fromNode='Clock0',toField='set_fraction',toNode='KelpPath0'),
      ROUTE(fromField='value_changed',fromNode='KelpPath0',toField='set_rotation',toNode='KelpTransform0'),
      #  ==================== 
      Script(DEF='TimeDelay1',
        field=[
        field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
        field(accessType='outputOnly',name='value_changed',type='SFFloat')]),
      OrientationInterpolator(DEF='KelpPath1',key=[0.0,0.05,0.25,0.45,0.5,0.55,0.75,0.95,1.0],keyValue=[(0,0,1,0.1),(0,0,1,0.095),(0,0,1,0),(0,0,1,-0.095),(0,0,1,-0.1),(0,0,1,-0.095),(0,0,1,0),(0,0,1,0.095),(0,0,1,0.1)]),
      ROUTE(fromField='fraction_changed',fromNode='Clock0',toField='set_fraction',toNode='TimeDelay1'),
      ROUTE(fromField='value_changed',fromNode='TimeDelay1',toField='set_fraction',toNode='KelpPath1'),
      ROUTE(fromField='value_changed',fromNode='KelpPath1',toField='set_rotation',toNode='KelpTransform1'),
      #  ==================== 
      Script(DEF='TimeDelay2',
        field=[
        field(accessType='inputOnly',name='set_fraction',type='SFFloat'),
        field(accessType='outputOnly',name='value_changed',type='SFFloat')]),
      OrientationInterpolator(DEF='KelpPath2',key=[0.0,0.05,0.25,0.45,0.5,0.55,0.75,0.95,1.0],keyValue=[(0,0,1,0.1),(0,0,1,0.095),(0,0,1,0),(0,0,1,-0.095),(0,0,1,-0.1),(0,0,1,-0.095),(0,0,1,0),(0,0,1,0.095),(0,0,1,0.1)]),
      ROUTE(fromField='fraction_changed',fromNode='Clock0',toField='set_fraction',toNode='TimeDelay2'),
      ROUTE(fromField='value_changed',fromNode='TimeDelay2',toField='set_fraction',toNode='KelpPath2'),
      ROUTE(fromField='value_changed',fromNode='KelpPath2',toField='set_rotation',toNode='KelpTransform2')])])
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for KelpExamplesNoBase.py")
