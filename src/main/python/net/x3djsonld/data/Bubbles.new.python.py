####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python Bubbles.py
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

newModel=X3D(profile='Interchange',version='3.3',
  head=head(
    children=[
    meta(content='Bubbles.x3d',name='title'),
    meta(content='Bubble animation used by Nancy Diving example.',name='description'),
    meta(content='Etsuko Lippi',name='creator'),
    meta(content='24 January 2001',name='created'),
    meta(content='23 May 2020',name='modified'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/Legacy/Bubbles.x3d',name='identifier'),
    meta(content='X3D-Edit 3.3, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='Bubbles.x3d'),
    Transform(DEF='Bubbles',
      children=[
      Group(DEF='Bubble',
        children=[
        TimeSensor(DEF='BubbleClock',cycleInterval=6.0,loop=True),
        PositionInterpolator(DEF='BubblePath1',key=[0,0,0,0,1],keyValue=[(0,0,0),(0.75,0.75,0.75),(0.86,0.86,0.86),(0.99,0.998,0.9876),(1.272,1.9044,0.9509)]),
        PositionInterpolator(DEF='BubblePath2',key=[0,0,0,0,1],keyValue=[(0.1,0.1,0.1),(0.2,0.4,0.25),(0.3,0.5,0.46),(0.75,0.5,0.575),(0.038483478,1.989,1.098373)]),
        PositionInterpolator(DEF='BubblePath3',key=[0,0,0,0,1],keyValue=[(0.01,0.01,0.01),(0.25,0.35,0.0045),(0.55,0.6,0.0055),(0.66,0.665,0.00655),(1.555,1.09043,0.005734)]),
        PositionInterpolator(DEF='BubblePath4',key=[0,0,0,0,1],keyValue=[(0,0,0),(0.5,0.5,0.005),(0.6,0.6,0.006),(0.75,0.75,0.0075),(1.948594,1.3983,0.009009349)]),
        PositionInterpolator(DEF='BubblePath5',key=[0,0,0,0,1],keyValue=[(0,0,0),(0.5,0.5,0.005),(0.6,0.6,0.006),(0.75,0.75,0.0075),(1.84444,1.22222,0.1)]),
        PositionInterpolator(DEF='BubblePath6',key=[0,0,0,0,1],keyValue=[(0,0,0),(0.235,0.3455,0.0055),(0.356,0.676,0.00456),(0.5675,0.75,0.0074565),(1.098,1.0343,0.14)]),
        PositionInterpolator(DEF='BubblePath7',key=[0,0,0,0,1],keyValue=[(0,0,0),(0.12345,0.2225,0.00335),(0.786,0.456,0.00666),(0.74555,0.7335,0.00234575),(0.08787,1.022,0.12)]),
        PositionInterpolator(DEF='BubblePath8',key=[0,0,0,0,1],keyValue=[(0,0,0),(0.1235,0.05,0.00125),(0.5666,0.4346,0.005556),(0.8975,0.34575,0.0098775),(1.8787,1.686,0.86)]),
        PositionInterpolator(DEF='BubblePath9',key=[0,0,0,0,1],keyValue=[(0,0,0),(0.522,0.5445,0.0057),(0.6543,0.226,0.0055),(0.45575,0.4375,0.0067),(1.8787,2,0.1545)]),
        PositionInterpolator(DEF='BubblePath10',key=[0,0,0,0,1],keyValue=[(0,0,0),(0.8765,0.445,0.00335),(0.3336,0.4446,0.005556),(0.765,0.75,0.0075),(1,1,0.1)]),
        Transform(
          children=[
          Transform(DEF='bubble1',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,1),transparency=0.8)),
              geometry=Sphere(radius=0.025))]),
          Transform(DEF='bubble2',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,1),transparency=0.8)),
              geometry=Sphere(radius=0.055))]),
          Transform(DEF='bubble3',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,1),transparency=0.8)),
              geometry=Sphere(radius=0.065))]),
          Transform(DEF='bubble4',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,1),transparency=0.8)),
              geometry=Sphere(radius=0.015))]),
          Transform(DEF='bubble5',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,1),transparency=0.8)),
              geometry=Sphere(radius=0.075))]),
          Transform(DEF='bubble6',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,1),transparency=0.8)),
              geometry=Sphere(radius=0.005))]),
          Transform(DEF='bubble7',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,1),transparency=0.8)),
              geometry=Sphere(radius=0.035))]),
          Transform(DEF='bubble8',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,1),transparency=0.8)),
              geometry=Sphere(radius=0.05))]),
          Transform(DEF='bubble9',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,1),transparency=0.8)),
              geometry=Sphere(radius=0.045))]),
          Transform(DEF='bubble10',
            children=[
            Shape(
              appearance=Appearance(
                material=Material(diffuseColor=(1,1,1),transparency=0.8)),
              geometry=Sphere(radius=0.035))]),
          ROUTE(fromField='fraction_changed',fromNode='BubbleClock',toField='set_fraction',toNode='BubblePath1'),
          ROUTE(fromField='fraction_changed',fromNode='BubbleClock',toField='set_fraction',toNode='BubblePath2'),
          ROUTE(fromField='fraction_changed',fromNode='BubbleClock',toField='set_fraction',toNode='BubblePath3'),
          ROUTE(fromField='fraction_changed',fromNode='BubbleClock',toField='set_fraction',toNode='BubblePath4'),
          ROUTE(fromField='fraction_changed',fromNode='BubbleClock',toField='set_fraction',toNode='BubblePath5'),
          ROUTE(fromField='fraction_changed',fromNode='BubbleClock',toField='set_fraction',toNode='BubblePath6'),
          ROUTE(fromField='fraction_changed',fromNode='BubbleClock',toField='set_fraction',toNode='BubblePath7'),
          ROUTE(fromField='fraction_changed',fromNode='BubbleClock',toField='set_fraction',toNode='BubblePath8'),
          ROUTE(fromField='fraction_changed',fromNode='BubbleClock',toField='set_fraction',toNode='BubblePath9'),
          ROUTE(fromField='fraction_changed',fromNode='BubbleClock',toField='set_fraction',toNode='BubblePath10'),
          ROUTE(fromField='value_changed',fromNode='BubblePath1',toField='set_translation',toNode='bubble1'),
          ROUTE(fromField='value_changed',fromNode='BubblePath2',toField='set_translation',toNode='bubble2'),
          ROUTE(fromField='value_changed',fromNode='BubblePath3',toField='set_translation',toNode='bubble3'),
          ROUTE(fromField='value_changed',fromNode='BubblePath4',toField='set_translation',toNode='bubble4'),
          ROUTE(fromField='value_changed',fromNode='BubblePath5',toField='set_translation',toNode='bubble5'),
          ROUTE(fromField='value_changed',fromNode='BubblePath6',toField='set_translation',toNode='bubble6'),
          ROUTE(fromField='value_changed',fromNode='BubblePath7',toField='set_translation',toNode='bubble7'),
          ROUTE(fromField='value_changed',fromNode='BubblePath8',toField='set_translation',toNode='bubble8'),
          ROUTE(fromField='value_changed',fromNode='BubblePath9',toField='set_translation',toNode='bubble9'),
          ROUTE(fromField='value_changed',fromNode='BubblePath10',toField='set_translation',toNode='bubble10')])])]),
    Background(skyColor=[(0,0,0.6)])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for Bubbles.py:')
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

print("python Bubbles.py load and self-test diagnostics complete.")
