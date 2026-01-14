####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python TestCycleTimeStart.py
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

newModel=X3D(profile='Interactive',version='3.0',
  head=head(
    children=[
    meta(content='TestCycleTimeStart.x3d',name='title'),
    meta(content='Andreas',name='creator'),
    meta(content='Joe D. Williams',name='creator'),
    meta(content='Test design patterns for animation control.',name='description'),
    meta(content='10 September 2023',name='created'),
    meta(content='19 September 2023',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/ConformanceNist/Sensors/TimeSensor/cycletimeIndex.html',name='reference'),
    meta(content='https://sourceforge.net/p/x3d/code/HEAD/tree/www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/originals/cycleTimeStart.x3d',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/TestCycleTimeStart.x3d',name='identifier'),
    meta(content='X3D-Edit 4.0, https://www.web3d.org/x3d/tools/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='TestCycleTimeStart.x3d'),
    Viewpoint(description='hello in there'),
    TimeSensor(DEF='REDTIME1',loop=True),
    TimeSensor(DEF='GREENTIME2',cycleInterval=5),
    TimeSensor(DEF='BLUETIME3',cycleInterval=10),
    BooleanFilter(DEF='GREENFILTER'),
    TimeTrigger(DEF='BLUETRIGGER'),
    ROUTE(fromField='cycleTime',fromNode='REDTIME1',toField='set_stopTime',toNode='REDTIME1'),
    ROUTE(fromField='stopTime',fromNode='REDTIME1',toField='set_startTime',toNode='GREENTIME2'),
    ROUTE(fromField='isActive',fromNode='GREENTIME2',toField='set_boolean',toNode='GREENFILTER'),
    ROUTE(fromField='inputFalse',fromNode='GREENFILTER',toField='set_boolean',toNode='BLUETRIGGER'),
    ROUTE(fromField='triggerTime',fromNode='BLUETRIGGER',toField='set_startTime',toNode='BLUETIME3'),
    Transform(DEF='REDBALL',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(1,0,0))),
        geometry=Sphere(),)]),
    Transform(DEF='GREENBALL',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,1,0))),
        geometry=Sphere(),)]),
    Transform(DEF='BLUEBALL',
      children=[
      Shape(
        appearance=Appearance(
          material=Material(diffuseColor=(0,0,1))),
        geometry=Sphere(),)]),
    PositionInterpolator(DEF='REDINTERP1',key=[0,0.25,0.5,0.75,1],keyValue=[(0,0,0),(2,0,0),(0,0,0),(-2,0,0),(0,0,0)]),
    PositionInterpolator(DEF='GREENINTERP2',key=[0,0.25,0.5,0.75,1],keyValue=[(0,0,0),(0,2,0),(0,0,0),(0,-2,0),(0,0,0)]),
    PositionInterpolator(DEF='BLUEINTERP3',key=[0,0.25,0.5,0.75,1],keyValue=[(0,0,0),(0,-2,0),(0,0,0),(0,2,0),(0,0,0)]),
    ROUTE(fromField='fraction_changed',fromNode='REDTIME1',toField='set_fraction',toNode='REDINTERP1'),
    ROUTE(fromField='value_changed',fromNode='REDINTERP1',toField='set_translation',toNode='REDBALL'),
    ROUTE(fromField='fraction_changed',fromNode='GREENTIME2',toField='set_fraction',toNode='GREENINTERP2'),
    ROUTE(fromField='value_changed',fromNode='GREENINTERP2',toField='set_translation',toNode='GREENBALL'),
    ROUTE(fromField='fraction_changed',fromNode='BLUETIME3',toField='set_fraction',toNode='BLUEINTERP3'),
    ROUTE(fromField='value_changed',fromNode='BLUEINTERP3',toField='set_translation',toNode='BLUEBALL')])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for TestCycleTimeStart.py:')
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

print("python TestCycleTimeStart.py load and self-test diagnostics complete.")
