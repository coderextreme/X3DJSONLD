####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python WinterAndSpringHumanoidTimings.py
#
# Python package x3d.py package is available on PyPI for import.
#   This approach simplifies Python X3D deployment and use.
#   https://pypi.org/project/x3d
#
# Installation:
#       pip install x3d
# or
#       python -m pip install x3d
#
# Developer options for loading x3d package in other Python programs:
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
    meta(content='WinterAndSpringHumanoidTimings.x3d',name='title'),
    meta(content='Example animation timings, manually translated from tool outputs and export.',name='description'),
    meta(content='https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/WinterAndSpringHumanoidTimings.x3dv',name='reference'),
    meta(content='reference .x3dv model successfully translated by Castle Game Engine, IICM, and Xj3D import (with loss of comments)',name='info'),
    meta(content='Katy Schildmeyer',name='creator'),
    meta(content='Carol McDonald',name='creator'),
    meta(content='Joe Williams',name='translator'),
    meta(content='Don Brutzman',name='translator'),
    meta(content='2 July 2023',name='created'),
    meta(content='9 July 2023',name='translated'),
    meta(content='19 September 2023',name='modified'),
    meta(content='MetadataString approach for name=poses sequence, matching the key/keyValue pairs, is experimental but seems unambiguous.',name='hint'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/WinterAndSpringHumanoidTimings.x3d',name='identifier'),
    meta(content='Cinema 4D https://www.maxon.net/en/cinema-4d',name='generator'),
    meta(content='X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='WinterAndSpringHumanoidTimings.x3d'),
    Viewpoint(DEF='EntryView1',description='Hello characters 1',position=(0,2,40)),
    Viewpoint(DEF='EntryView2',centerOfRotation=(0,10,10),description='Hello characters 2',orientation=(0,1,0,-0.643501),position=(-15,10,30),
      #  local lookat point: 0 10 10 
      ),
    Transform(DEF='TextRoot',
      children=[
      Shape(DEF='ModelDescriptionText',
        geometry=Text(string=["This scene tests","","experimental approaches","","for human animation"],
          fontStyle=FontStyle(family=["SANS"],justify=["MIDDLE","MIDDLE"],size=0.8,style_='BOLD')),
        appearance=Appearance(
          material=Material(diffuseColor=(0.960784,0.894118,0))))]),
    Transform(DEF='Root4'),
    Transform(DEF='Root5'),
    Transform(DEF='Root6'),
    #  WinterAndSpringHumanoidTimings 
    #  Gramps_humanoid root is at 0 0.875 0 at start, now at given x and z with root now changed in height to 0.95 to #add pathway height. The actual Gramps height (y) may be slightly different but use this value for now. 
    PositionInterpolator(DEF='Gramps_HumanoidRoot_TranslationInterpolator',key=[0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1],keyValue=[(6.8557,0.95,0.5),(6.8557,0.95,0.5),(6.8557,0.95,0.5),(9.8557,0.95,3.5),(9.8557,0.95,3.5),(9.8557,0.95,3.5),(14.3558,0.95,8.0),(16.8558,0.95,15.0),(21.3557,0.95,24.5),(21.3557,0.95,24.5),(21.3557,0.95,24.5)],
      metadata=MetadataString(name='poses',value=["Gramps_Stand01","Gramps_Stand01","Gramps_Walk01","Gramps_Stand02","Gramps_Turn01","Gramps_Walk01","Gramps_Walk02","Gramps_Skip01","Gramps_Stand03","Gramps_Stand03","Gramps_Stand03"])),
    PositionInterpolator(DEF='Leif_HumanoidRoot_TranslationInterpolator',key=[0,0.09,0.11,0.223,0.043,0.55,0.63,0.73,0.85,0.86,1],keyValue=[(-7.9962,0.400,3.000),(-7.9962,0.400,3.000),(-7.9962,0.400,3.000),(-7.9962,0.400,3.000),(9.004,0.475,3.4999),(11.5048,0.475,3.3699),(16.0038,0.475,7.8699),(18.5038,0.475,14.8699),(23.0038,0.475,24.3699),(23.0038,0.475,24.3699),(23.0038,0.475,24.3699)],
      metadata=MetadataString(name='poses',value=["Leif_Stand01","Leif_Stand01","Leif_Stand01","Leif_Run01","Leif_Turn01","Leif_Walk01","Leif_Walk01","Leif_Skip01","Leif_Stand01","Leif_Stand01","Leif_Stand01"])),
    PositionInterpolator(DEF='Lily_HumanoidRoot_TranslationInterpolator',key=[0,0.09,0.11,0.225,0.043,0.55,0.63,0.73,0.85,0.86,1],keyValue=[(-8.0962,0.400,5.600),(-8.0962,0.400,5.600),(-8.0962,0.400,5.600),(-8.0962,0.400,5.600),(8.9038,0.475,4.0999),(10.6538,0.475,3.3499),(15.1538,0.475,7.8499),(17.6538,0.475,14.8499),(22.1538,0.475,24.3499),(22.1538,0.475,24.3499),(22.1538,0.475,24.3499)],
      metadata=MetadataString(name='poses',value=["Lily_Stand01","Lily_Stand01","Lily_Stand01","Leif_Run01","Lily_Turn01","Lily_Walk01","Lily_Walk01","Lily_Skip01","Lily_Stand01","Lily_Stand01","Lily_Stand01"])),
    PositionInterpolator(DEF='Tufani_HumanoidRoot_TranslationInterpolator',key=[0,0.09,0.11,0.227,0.043,0.55,0.63,0.73,0.85,0.86,1],keyValue=[(-8.0962,0.400,6.400),(-8.0962,0.400,6.400),(-8.0962,0.400,6.400),(-8.0962,0.400,6.400),(9.40338,0.475,4.3999),(9.1538,0.475,3.2699),(13.6538,0.475,7.7699),(16.1538,0.475,14.7699),(20.6538,0.475,24.2699),(20.6538,0.475,24.2699),(20.6538,0.475,24.2699)],
      metadata=MetadataString(name='poses',value=["Tufani_Stand01","Tufani_Stand01","Tufani_Stand01","Tufani_Run01","Tufani_Turn01","Tufani_Walk01","Tufani_Walk01","Tufani_Skip01","Tufani_Stand01","Tufani_Stand01","Tufani_Stand01"])),
    #  Now add Background nodes with corresponding timing, as controlled by an identical key array 
    #  TODO are we missing Background1 and Background2? 
    #  This is black for all 
    Background(DEF='Background3Black'),
    #  This is blue sky and green grass 
    Background(DEF='Background4SkyBlueGreenGrass',groundAngle=[1.57],groundColor=[(0.356863,0.639216,0),(0.721569,1,0.501961)],skyColor=[(0,0.71,0.886)]),
    #  This is light gray sky and green grass 
    Background(DEF='Background5LightGrey',skyColor=[(0.827,0.827,0.827)]),
    #  This is black background and white text for all 
    Background(DEF='Background6DarkGrey',skyColor=[(0.6,0.2,0.2)]),
    #  Animation controls 
    TimeSensor(DEF='Clock10Seconds',cycleInterval=5,loop=True),
    TimeSensor(DEF='Clock100Seconds',cycleInterval=100,enabled=False),
    BooleanSequencer(DEF='Background3Sequencer',key=[0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1],keyValue=[True,True,True,False,False,False,False,False,False,False,False]),
    BooleanSequencer(DEF='Background4Sequencer',key=[0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1],keyValue=[False,False,False,True,True,False,False,False,False,False,False]),
    BooleanSequencer(DEF='Background5Sequencer',key=[0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1],keyValue=[False,False,False,False,False,True,True,True,False,False,False]),
    BooleanSequencer(DEF='Background6Sequencer',key=[0,0.09,0.11,0.22,0.043,0.55,0.63,0.73,0.85,0.86,1],keyValue=[False,False,False,False,False,False,False,False,True,True,True]),
    ROUTE(fromField='value_changed',fromNode='Background3Sequencer',toField='set_bind',toNode='Background3Black'),
    ROUTE(fromField='value_changed',fromNode='Background4Sequencer',toField='set_bind',toNode='Background4SkyBlueGreenGrass'),
    ROUTE(fromField='value_changed',fromNode='Background5Sequencer',toField='set_bind',toNode='Background5LightGrey'),
    ROUTE(fromField='value_changed',fromNode='Background6Sequencer',toField='set_bind',toNode='Background6DarkGrey'),
    ROUTE(fromField='fraction_changed',fromNode='Clock10Seconds',toField='set_fraction',toNode='Background3Sequencer'),
    ROUTE(fromField='fraction_changed',fromNode='Clock10Seconds',toField='set_fraction',toNode='Background4Sequencer'),
    ROUTE(fromField='fraction_changed',fromNode='Clock10Seconds',toField='set_fraction',toNode='Background5Sequencer'),
    ROUTE(fromField='fraction_changed',fromNode='Clock10Seconds',toField='set_fraction',toNode='Background6Sequencer'),
    ROUTE(fromField='fraction_changed',fromNode='Clock100Seconds',toField='set_fraction',toNode='Background3Sequencer'),
    ROUTE(fromField='fraction_changed',fromNode='Clock100Seconds',toField='set_fraction',toNode='Background4Sequencer'),
    ROUTE(fromField='fraction_changed',fromNode='Clock100Seconds',toField='set_fraction',toNode='Background5Sequencer'),
    ROUTE(fromField='fraction_changed',fromNode='Clock100Seconds',toField='set_fraction',toNode='Background6Sequencer'),
    #  now move things around by modifying interpolator valuess 
    ROUTE(fromField='fraction_changed',fromNode='Clock10Seconds',toField='set_fraction',toNode='Gramps_HumanoidRoot_TranslationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='Clock10Seconds',toField='set_fraction',toNode='Leif_HumanoidRoot_TranslationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='Clock10Seconds',toField='set_fraction',toNode='Lily_HumanoidRoot_TranslationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='Clock10Seconds',toField='set_fraction',toNode='Tufani_HumanoidRoot_TranslationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='Clock100Seconds',toField='set_fraction',toNode='Gramps_HumanoidRoot_TranslationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='Clock100Seconds',toField='set_fraction',toNode='Leif_HumanoidRoot_TranslationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='Clock100Seconds',toField='set_fraction',toNode='Lily_HumanoidRoot_TranslationInterpolator'),
    ROUTE(fromField='fraction_changed',fromNode='Clock100Seconds',toField='set_fraction',toNode='Tufani_HumanoidRoot_TranslationInterpolator'),
    #  now move things around by changing the Transform translation values 
    ROUTE(fromField='value_changed',fromNode='Gramps_HumanoidRoot_TranslationInterpolator',toField='translation',toNode='TextRoot'),
    ROUTE(fromField='value_changed',fromNode='Leif_HumanoidRoot_TranslationInterpolator',toField='translation',toNode='Root4'),
    ROUTE(fromField='value_changed',fromNode='Lily_HumanoidRoot_TranslationInterpolator',toField='translation',toNode='Root5'),
    ROUTE(fromField='value_changed',fromNode='Tufani_HumanoidRoot_TranslationInterpolator',toField='translation',toNode='Root6')])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for WinterAndSpringHumanoidTimings.py:')
if        metaDiagnostics(newModel): # built-in utility method in X3D class
    print(metaDiagnostics(newModel)) # display meta info, hint, warning, error, TODO values in this model
# print('check newModel.XML() serialization...')
newModelXML= newModel.XML() # test export method XML() for exceptions during export
newModel.XMLvalidate()
# print(newModelXML) # diagnostic

try:
#   print('check newModel.VRML() serialization...')
    newModelVRML=newModel.VRML() # test export method VRML() for exceptions during export
    # print(prependLineNumbers(newModelVRML)) # debug
    print("Python-to-VRML export of VRML output successful", flush=True)
except Exception as err: # usually BaseException
    # https://stackoverflow.com/questions/18176602/how-to-get-the-name-of-an-exception-that-was-caught-in-python
    print("*** Python-to-VRML export of VRML output failed:", type(err).__name__, err)
    if newModelVRML: # may have failed to generate
        print(prependLineNumbers(newModelVRML, err.lineno))

try:
#   print('check newModel.JSON() serialization...')
    newModelJSON=newModel.JSON() # test export method JSON() for exceptions during export
#   print(prependLineNumbers(newModelJSON)) # debug
    print("Python-to-JSON export of JSON output successful (under development)")
except Exception as err: # usually SyntaxError
    print("*** Python-to-JSON export of JSON output failed:", type(err).__name__, err)
    if newModelJSON: # may have failed to generate
        print(prependLineNumbers(newModelJSON,err.lineno))

print("python WinterAndSpringHumanoidTimings.py load and self-test diagnostics complete.")
