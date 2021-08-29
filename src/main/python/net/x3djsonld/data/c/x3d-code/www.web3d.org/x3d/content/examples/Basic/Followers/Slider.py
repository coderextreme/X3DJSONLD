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

newModel=X3D(profile='Immersive',version='3.2',
  head=head(
    children=[
    meta(content='Slider.x3d',name='title'),
    meta(content='X3D Follower example',name='description'),
    meta(content='Herbert Stocker',name='creator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='18 April 2006',name='created'),
    meta(content='2 December 2011',name='translated'),
    meta(content='20 October 2019',name='modified'),
    meta(content='originals/test_Sliders.wrl',name='reference'),
    meta(content='Stocker_06_Followers.pdf',name='reference'),
    meta(content='http://www.hersto.com/Publications/Followers',name='reference'),
    meta(content='X3D version 3.2 or greater',name='requires'),
    meta(content='X3D Follower Chaser Damper',name='subject'),
    meta(content='under development',name='warning'),
    meta(content='https://www.web3d.org/x3d/content/examples/X3dSceneAuthoringHints.html',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/Basic/Followers/Slider.x3d',name='identifier'),
    meta(content='Vrml97ToX3dNist, http://ovrt.nist.gov/v2_x3d.html',name='generator'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(info=[" The original versions of the PROTO Slider was written by me, Herbert Stocker. The original versions and some test and demonstration Worlds can be found at http://www.hersto.de/ . "," You can use and modify the PROTO in this file if you keep the credit information valid and if you do not remove the link to the originating site http://www.hersto.de/ . In brief, keep this WorldInfo node along with the Proto. "," Please send a message to hersto@hersto.de where you describe how you use or improved the nodes. Especially if you included the improved versions. "],title='Copyright (C) 2002 by Herbert Stocker (AKA hersto)'),
    ProtoDeclare(name='Slider',
      ProtoInterface=ProtoInterface(
        field=[
        field(accessType='initializeOnly',name='initial_position',type='SFFloat',value=0.5),
        field(accessType='initializeOnly',name='credits',type='MFString',value=["Initial idea and copyright by Herbert Stocker http://www.hersto.com/"]),
        field(accessType='inputOutput',name='radiusKnob',type='SFFloat',value=0.3),
        field(accessType='inputOutput',name='radiusStick',type='SFFloat',value=0.2),
        field(accessType='inputOnly',name='silently_set_unfiltered_position',type='SFFloat'),
        field(accessType='inputOutput',name='min',type='SFFloat',value=0.0),
        field(accessType='outputOnly',name='position_changed',type='SFFloat'),
        field(accessType='inputOutput',name='appearance',type='SFNode',
          children=[
          Appearance(
            material=Material(),)]),
        field(accessType='inputOutput',name='smoothMovements',type='SFBool',value=True),
        field(accessType='inputOnly',name='set_position',type='SFFloat'),
        field(accessType='inputOutput',name='pageSize',type='SFFloat',value=0.2),
        field(accessType='inputOutput',name='max',type='SFFloat',value=1.0),
        field(accessType='outputOnly',name='unfiltered_position_changed',type='SFFloat'),
        field(accessType='inputOnly',name='silently_set_position',type='SFFloat'),
        field(accessType='inputOnly',name='set_unfiltered_position',type='SFFloat'),
        field(accessType='inputOutput',name='height',type='SFFloat',value=2.0),
        field(accessType='outputOnly',name='positionInt_changed',type='SFInt32')]),
      ProtoBody=ProtoBody(
        children=[
        Billboard(
          children=[
          Transform(DEF='TrStickAbove',
            children=[
            TouchSensor(DEF='TchPgUp',description='touch to activate PgUp'),
            Shape(
              IS=IS(
                connect=[
                connect(nodeField='appearance',protoField='appearance')]),
              geometry=Cylinder(height=1.0))]),
          Transform(DEF='TrStickBelow',
            children=[
            TouchSensor(DEF='TchPgDown',description='touch to activate PgDown'),
            Shape(
              IS=IS(
                connect=[
                connect(nodeField='appearance',protoField='appearance')]),
              geometry=Cylinder(height=1.0))]),
          Group(
            children=[
            PlaneSensor(DEF='SensKnob',autoOffset=False,description='touch to activate',maxPosition=(0.0,-1.0)),
            Transform(DEF='TrKnob',
              children=[
              Shape(
                IS=IS(
                  connect=[
                  connect(nodeField='appearance',protoField='appearance')]),
                geometry=Cylinder(height=1.0))])])]),
        ProtoDeclare(name='EFFS',
          ProtoInterface=ProtoInterface(
            field=[
            field(accessType='inputOutput',name='height',type='SFFloat',value=2.0),
            field(accessType='inputOutput',name='max',type='SFFloat',value=1.0),
            field(accessType='inputOutput',name='radiusKnob',type='SFFloat',value=0.5),
            field(accessType='inputOutput',name='pageSize',type='SFFloat',value=0.2),
            field(accessType='inputOutput',name='smoothMovements',type='SFBool',value=True),
            field(accessType='inputOutput',name='radiusStick',type='SFFloat',value=0.25),
            field(accessType='inputOutput',name='min',type='SFFloat',value=0.0)]),
          ProtoBody=ProtoBody(
            children=[
            Group(),])),
        ProtoInstance(DEF='EFFS',name='EFFS',
          fieldValue=[
          fieldValue(name='max',value=1.0),
          fieldValue(name='height',value=2.0),
          fieldValue(name='pageSize',value=0.2),
          fieldValue(name='radiusKnob',value=0.5),
          fieldValue(name='smoothMovements',value=True),
          fieldValue(name='radiusStick',value=0.25),
          fieldValue(name='min',value=0.0)]),
        TimeSensor(DEF='Timer',loop=True),
        Script(DEF='Worker',directOutput=True,
          field=[
          field(accessType='initializeOnly',name='height',type='SFFloat',value=2.0),
          field(accessType='inputOnly',name='set_max',type='SFFloat'),
          field(accessType='initializeOnly',name='silent',type='SFBool',value=False),
          field(accessType='initializeOnly',name='lastTick',type='SFTime',value=0.0),
          field(accessType='inputOnly',name='set_pageSize',type='SFFloat'),
          field(accessType='inputOnly',name='decPage',type='SFTime'),
          field(accessType='inputOnly',name='set_radiusStick',type='SFFloat'),
          field(accessType='inputOnly',name='set_height',type='SFFloat'),
          field(accessType='outputOnly',name='position_changed',type='SFFloat'),
          field(accessType='initializeOnly',name='Timer',type='SFNode',
            children=[
            TimeSensor(USE='Timer')]),
          field(accessType='inputOnly',name='set_position',type='SFFloat'),
          field(accessType='initializeOnly',name='snapTime',type='SFTime',value=0.0),
          field(accessType='initializeOnly',name='TrStickAbove',type='SFNode',
            children=[
            Transform(USE='TrStickAbove')]),
          field(accessType='inputOnly',name='set_radiusKnob',type='SFFloat'),
          field(accessType='initializeOnly',name='smoothMovements',type='SFBool',value=True),
          field(accessType='initializeOnly',name='max',type='SFFloat',value=1.0),
          field(accessType='initializeOnly',name='initialUpdate',type='SFBool',value=True),
          field(accessType='initializeOnly',name='EFFS',type='SFNode',
            children=[
            ProtoInstance(USE='EFFS')]),
          field(accessType='initializeOnly',name='SensKnobOrigin',type='SFFloat',value=0.0),
          field(accessType='initializeOnly',name='pageSize',type='SFFloat',value=0.2),
          field(accessType='outputOnly',name='positionInt_changed',type='SFInt32'),
          field(accessType='initializeOnly',name='SmoothTau3',type='SFFloat',value=0.05),
          field(accessType='initializeOnly',name='SmoothTau2',type='SFFloat',value=0.05),
          field(accessType='initializeOnly',name='SmoothTau1',type='SFFloat',value=0.05),
          field(accessType='inputOnly',name='set_min',type='SFFloat'),
          field(accessType='inputOnly',name='SensKnob_isActive',type='SFBool'),
          field(accessType='initializeOnly',name='KnobSize',type='SFFloat',value=0.0),
          field(accessType='inputOnly',name='silently_set_position',type='SFFloat'),
          field(accessType='initializeOnly',name='initialUnfilteredUpdate',type='SFBool',value=True),
          field(accessType='initializeOnly',name='positionSmo3',type='SFFloat',value=0.0),
          field(accessType='initializeOnly',name='snapToInt',type='SFBool',value=False),
          field(accessType='initializeOnly',name='positionSmo2',type='SFFloat',value=0.0),
          field(accessType='inputOnly',name='set_unfiltered_position',type='SFFloat'),
          field(accessType='initializeOnly',name='positionSmo1',type='SFFloat',value=0.0),
          field(accessType='inputOnly',name='silently_set_unfiltered_position',type='SFFloat'),
          field(accessType='initializeOnly',name='radiusStick',type='SFFloat',value=0.25),
          field(accessType='initializeOnly',name='KnobCenterPos',type='SFFloat',value=0.0),
          field(accessType='initializeOnly',name='position',type='SFFloat'),
          field(accessType='inputOnly',name='SensKnob_translationChanged',type='SFVec3f'),
          field(accessType='initializeOnly',name='radiusKnob',type='SFFloat',value=0.5),
          field(accessType='initializeOnly',name='TrStickBelow',type='SFNode',
            children=[
            Transform(USE='TrStickBelow')]),
          field(accessType='initializeOnly',name='TchPgUp',type='SFNode',
            children=[
            TouchSensor(USE='TchPgUp')]),
          field(accessType='inputOnly',name='incPage',type='SFTime'),
          field(accessType='outputOnly',name='unfiltered_position_changed',type='SFFloat'),
          field(accessType='inputOnly',name='Tick',type='SFTime'),
          field(accessType='inputOnly',name='set_smooothMovements',type='SFBool'),
          field(accessType='initializeOnly',name='min',type='SFFloat',value=0.0),
          field(accessType='initializeOnly',name='TchPgDown',type='SFNode',
            children=[
            TouchSensor(USE='TchPgDown')]),
          field(accessType='initializeOnly',name='TrKnob',type='SFNode',
            children=[
            Transform(USE='TrKnob')])],
          IS=IS(
            connect=[
            connect(nodeField='position_changed',protoField='position_changed'),
            connect(nodeField='set_position',protoField='set_position'),
            connect(nodeField='positionInt_changed',protoField='positionInt_changed'),
            connect(nodeField='silently_set_position',protoField='silently_set_position'),
            connect(nodeField='set_unfiltered_position',protoField='set_unfiltered_position'),
            connect(nodeField='silently_set_unfiltered_position',protoField='silently_set_unfiltered_position'),
            connect(nodeField='position',protoField='initial_position'),
            connect(nodeField='unfiltered_position_changed',protoField='unfiltered_position_changed')]))]))]
    #  TODO anchor link 
    )
) # X3D model complete

###############################################
# Self-test diagnostics
###############################################

if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel))
print('check  newModel.XML() serialization...')
newModelXML = newModel.XML() # test export method XML() for exceptions
# print(newModelXML) # debug

print ("python x3d.py load successful for Slider.py")
