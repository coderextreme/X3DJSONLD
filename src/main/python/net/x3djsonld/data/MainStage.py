####################################################################################################
#
# Invoking X3D model self-test:
#
#   $ python MainStage.py
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

newModel=X3D(profile='Interchange',version='4.0',
  head=head(
    children=[
    component(level=1,name='HAnim'),
    meta(content='MainStage.x3d',name='title'),
    meta(content='Main stage for HAnim scene Winter and Spring.',name='description'),
    meta(content='Joe Williams',name='creator'),
    meta(content='Joe Williams and Don Brutzman',name='translator'),
    meta(content='25 May 2023',name='created'),
    meta(content='27 May 2023',name='modified'),
    meta(content='originals/0MainStageScene0525.x3dv',name='reference'),
    meta(content='https://www.web3d.org/x3d/content/examples/HumanoidAnimation/WinterAndSpring/MainStage.x3d',name='identifier'),
    meta(content='X3D-Edit 4.0, https://savage.nps.edu/X3D-Edit',name='generator'),
    meta(content='../license.html',name='license')]),
  Scene=Scene(
    children=[
    WorldInfo(title='MainStage.x3d'),
    NavigationInfo(headlight=False),
    DirectionalLight(ambientIntensity=1.0,direction=(-.5,-.5,-.5),global_=True),
    DirectionalLight(ambientIntensity=1.0,direction=(-1,-1,-1),global_=True),
    DirectionalLight(ambientIntensity=1.0,direction=(1,1,-1),global_=True,intensity=0.5),
    Viewpoint(DEF='Scene_StageFrontViewFar',description='hanim_Stage Front View',orientation=(1,0,0,-.449999988),position=(0,4,10)),
    Viewpoint(DEF='Scene_InclinedView',description='hanim_Inclined View',orientation=(-.112999998,.992999971,.034699999,.671000004),position=(2.619999886,1.049999952,4.059999943)),
    Viewpoint(DEF='Scene_StageFrontView',description='hanim_Stage Front View',position=(0,1,5)),
    Viewpoint(DEF='Scene_FeetStageBottomView',description='hanim_feet View',orientation=(1,0,0,1.570000052),position=(0,-10,0)),
    Viewpoint(DEF='Scene_HeadTopView',description='hanim_Head Top View',orientation=(1,0,0,-1.570000052),position=(0,15,0)),
    Viewpoint(DEF='Scene_TopFrontCloseView',description='hanim_Head Top View',orientation=(1,0,0,-1.100000024),position=(0,8,3)),
    Group(DEF='HAnimStage',
      children=[
      Transform(DEF='cordsysfloor',scale=(.174999997,.174999997,.174999997),
        children=[
        Inline(url=["JointCoordinateAxes.x3dv"])]),
      Transform(DEF='StageGeometry',scale=(1,.01,1),translation=(0,-.01,0),
        children=[
        Shape(
          appearance=Appearance(
            material=Material(transparency=0.6)),
          geometry=Box(size=(9,1,9))),
        Transform(DEF='Circle0',
          children=[
          Shape(
            appearance=Appearance(DEF='LineColor',
              material=Material(ambientIntensity=1.0,diffuseColor=(.699999988,0,.899999976),emissiveColor=(.449999988,.449999988,1),shininess=1.0,specularColor=(0,0,1))),
            geometry=IndexedLineSet(DEF='Orbit1',coordIndex=[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48,49,50,51,52,53,54,55,56,57,58,59,60,-1],
              coord=Coordinate(point=[(1,0,0),(.995000005,0,-.104999997),(.978999972,0,-.208000004),(.950999975,0,-.308999985),(.913999975,0,-.407000005),(.865999997,0,-.5),(.809000015,0,-.588),(.742999971,0,-.66900003),(.66900003,0,-.742999971),(.588,0,-.809000015),(.5,0,-.865999997),(.407000005,0,-.913999975),(.308999985,0,-.950999975),(.208000004,0,-.977999985),(.104999997,0,-.995000005),(0,0,-1),(-.104999997,0,-.994521976),(-.208000004,0,-.977999985),(-.308999985,0,-.950999975),(-.407000005,0,-.913999975),(-.5,0,-.865999997),(-.588,0,-.809000015),(-.66900003,0,-.742999971),(-.742999971,0,-.66900003),(-.809000015,0,-.588),(-.865999997,0,-.5),(-.913999975,0,-.407000005),(-.950999975,0,-.308999985),(-.977999985,0,-.208000004),(-.995000005,0,-.104999997),(-1,0,0),(-.995000005,0,.104999997),(-.977999985,0,.208000004),(-.950999975,0,.308999985),(-.913999975,0,.407000005),(-.865999997,0,.5),(-.809000015,0,.588),(-.742999971,0,.66900003),(-.66900003,0,.742999971),(-.588,0,.809000015),(-.5,0,.865999997),(-.407000005,0,.913999975),(-.308999985,0,.950999975),(-.208000004,0,.977999985),(-.104999997,0,.995000005),(0,0,1),(.104999997,0,.995000005),(.208000004,0,.977999985),(.308999985,0,.950999975),(.407000005,0,.913999975),(.5,0,.865999997),(.588,0,.809000015),(.66900003,0,.742999971),(.742999971,0,.66900003),(.809000015,0,.588),(.865999997,0,.5),(.913999975,0,.407000005),(.950999975,0,.308999985),(.977999985,0,.208000004),(.995000005,0,.104000002),(1,0,0)])))]),
        Transform(DEF='Circle1',scale=(.5,1,.5),
          children=[
          Shape(
            appearance=Appearance(USE='LineColor'),
            geometry=IndexedLineSet(USE='Orbit1'))]),
        Transform(DEF='Circle2',scale=(.25,1,.25),
          children=[
          Shape(
            appearance=Appearance(USE='LineColor'),
            geometry=IndexedLineSet(USE='Orbit1'))]),
        Transform(DEF='Circle3',scale=(2,1,2),
          children=[
          Shape(
            appearance=Appearance(USE='LineColor'),
            geometry=IndexedLineSet(USE='Orbit1'))]),
        Transform(DEF='Circle4',scale=(3,1,3),
          children=[
          Shape(
            appearance=Appearance(USE='LineColor'),
            geometry=IndexedLineSet(USE='Orbit1'))])])])])
) # X3D model complete

####################################################################################################
# Self-test diagnostics
####################################################################################################

print('Self-test diagnostics for MainStage.py:')
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

print("python MainStage.py load and self-test diagnostics complete.")
